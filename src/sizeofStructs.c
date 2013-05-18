#include "RCUDA.h"
#include <cuda.h>
#include <driver_types.h>
#include <texture_types.h>


SEXP R_getSizeofStructs()
{
    SEXP r_ans, names;
    unsigned int i, n = 58;
    PROTECT(r_ans = NEW_INTEGER(n));
    PROTECT(names = NEW_CHARACTER(n));
    
    INTEGER(r_ans)[i] = sizeof(struct CUuuid_st);
    SET_STRING_ELT(names, i++, mkChar("CUuuid_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUuuid_st);
    SET_STRING_ELT(names, i++, mkChar("CUuuid"));
    INTEGER(r_ans)[i] = sizeof(struct CUuuid_st);
    SET_STRING_ELT(names, i++, mkChar("CUuuid_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUipcEventHandle_st);
    SET_STRING_ELT(names, i++, mkChar("CUipcEventHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUipcEventHandle_st);
    SET_STRING_ELT(names, i++, mkChar("CUipcEventHandle"));
    INTEGER(r_ans)[i] = sizeof(struct CUipcEventHandle_st);
    SET_STRING_ELT(names, i++, mkChar("CUipcEventHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUipcMemHandle_st);
    SET_STRING_ELT(names, i++, mkChar("CUipcMemHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUipcMemHandle_st);
    SET_STRING_ELT(names, i++, mkChar("CUipcMemHandle"));
    INTEGER(r_ans)[i] = sizeof(struct CUipcMemHandle_st);
    SET_STRING_ELT(names, i++, mkChar("CUipcMemHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUdevprop_st);
    SET_STRING_ELT(names, i++, mkChar("CUdevprop_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUdevprop_st);
    SET_STRING_ELT(names, i++, mkChar("CUdevprop"));
    INTEGER(r_ans)[i] = sizeof(struct CUdevprop_st);
    SET_STRING_ELT(names, i++, mkChar("CUdevprop_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY2D_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY2D_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY2D_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY2D"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY2D_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY2D_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY3D_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY3D_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY3D_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY3D"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY3D_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY3D_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY3D_PEER_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY3D_PEER_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY3D_PEER_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY3D_PEER"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_MEMCPY3D_PEER_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_MEMCPY3D_PEER_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_ARRAY_DESCRIPTOR_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_ARRAY_DESCRIPTOR_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_ARRAY_DESCRIPTOR_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_ARRAY_DESCRIPTOR"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_ARRAY_DESCRIPTOR_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_ARRAY_DESCRIPTOR_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_ARRAY3D_DESCRIPTOR_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_ARRAY3D_DESCRIPTOR_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_ARRAY3D_DESCRIPTOR_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_ARRAY3D_DESCRIPTOR"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_ARRAY3D_DESCRIPTOR_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_ARRAY3D_DESCRIPTOR_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_RESOURCE_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_RESOURCE_DESC_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_RESOURCE_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_RESOURCE_DESC"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_RESOURCE_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_RESOURCE_DESC_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_TEXTURE_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_TEXTURE_DESC_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_TEXTURE_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_TEXTURE_DESC"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_TEXTURE_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_TEXTURE_DESC_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_RESOURCE_VIEW_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_RESOURCE_VIEW_DESC_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_RESOURCE_VIEW_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_RESOURCE_VIEW_DESC"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_RESOURCE_VIEW_DESC_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_RESOURCE_VIEW_DESC_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_POINTER_ATTRIBUTE_P2P_TOKENS"));
    INTEGER(r_ans)[i] = sizeof(struct CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st);
    SET_STRING_ELT(names, i++, mkChar("CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st"));
    INTEGER(r_ans)[i] = sizeof(struct cudaChannelFormatDesc);
    SET_STRING_ELT(names, i++, mkChar("cudaChannelFormatDesc"));
    INTEGER(r_ans)[i] = sizeof(struct cudaPitchedPtr);
    SET_STRING_ELT(names, i++, mkChar("cudaPitchedPtr"));
    INTEGER(r_ans)[i] = sizeof(struct cudaExtent);
    SET_STRING_ELT(names, i++, mkChar("cudaExtent"));
    INTEGER(r_ans)[i] = sizeof(struct cudaPos);
    SET_STRING_ELT(names, i++, mkChar("cudaPos"));
    INTEGER(r_ans)[i] = sizeof(struct cudaMemcpy3DParms);
    SET_STRING_ELT(names, i++, mkChar("cudaMemcpy3DParms"));
    INTEGER(r_ans)[i] = sizeof(struct cudaMemcpy3DPeerParms);
    SET_STRING_ELT(names, i++, mkChar("cudaMemcpy3DPeerParms"));
    INTEGER(r_ans)[i] = sizeof(struct cudaResourceDesc);
    SET_STRING_ELT(names, i++, mkChar("cudaResourceDesc"));
    INTEGER(r_ans)[i] = sizeof(struct cudaResourceViewDesc);
    SET_STRING_ELT(names, i++, mkChar("cudaResourceViewDesc"));
    INTEGER(r_ans)[i] = sizeof(struct cudaPointerAttributes);
    SET_STRING_ELT(names, i++, mkChar("cudaPointerAttributes"));
    INTEGER(r_ans)[i] = sizeof(struct cudaFuncAttributes);
    SET_STRING_ELT(names, i++, mkChar("cudaFuncAttributes"));
    INTEGER(r_ans)[i] = sizeof(struct cudaDeviceProp);
    SET_STRING_ELT(names, i++, mkChar("cudaDeviceProp"));
    INTEGER(r_ans)[i] = sizeof(struct cudaIpcEventHandle_st);
    SET_STRING_ELT(names, i++, mkChar("cudaIpcEventHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct cudaIpcEventHandle_st);
    SET_STRING_ELT(names, i++, mkChar("cudaIpcEventHandle_t"));
    INTEGER(r_ans)[i] = sizeof(struct cudaIpcEventHandle_st);
    SET_STRING_ELT(names, i++, mkChar("cudaIpcEventHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct cudaIpcMemHandle_st);
    SET_STRING_ELT(names, i++, mkChar("cudaIpcMemHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct cudaIpcMemHandle_st);
    SET_STRING_ELT(names, i++, mkChar("cudaIpcMemHandle_t"));
    INTEGER(r_ans)[i] = sizeof(struct cudaIpcMemHandle_st);
    SET_STRING_ELT(names, i++, mkChar("cudaIpcMemHandle_st"));
    INTEGER(r_ans)[i] = sizeof(struct CUuuid_st);
    SET_STRING_ELT(names, i++, mkChar("cudaUUID_t"));
    INTEGER(r_ans)[i] = sizeof(struct cudaTextureDesc);
    SET_STRING_ELT(names, i++, mkChar("cudaTextureDesc"));
    
    SET_NAMES(r_ans, names);
    UNPROTECT(2);
    return(r_ans);
}
