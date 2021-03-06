library(RCUDA)


f = system.file("sampleKernels", "dnorm.ptx", package = "RCUDA")

if(file.exists(f)) {

cuGetContext(TRUE)

vals = profileCUDA(
 {
   m = loadModule(f)
   k = m$dnorm_kernel

   N = 1e6L
   x = rnorm(N)

   mem = copyToDevice(x)

   mu = 0.3
   sigma = 1.5

   .cuda(k, mem, N, mu, sigma, gridDim = c(64L, 64L, 1L), blockDim = c(512L, 1L, 1L))
 }, "prof.out")



}
