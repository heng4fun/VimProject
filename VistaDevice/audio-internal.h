#ifndef AUDIO_INTERNAL_H
#define AUDIO_INTERNAL_H

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */

/* Start for Hidden Audio Core Api: PolicyConfig */

#ifndef __IPolicyConfig_FWD_DEFINED__
#define __IPolicyConfig_FWD_DEFINED__
typedef interface IPolicyConfig IPolicyConfig;
#endif 	/* __IPolicyConfig_FWD_DEFINED__ */


#ifndef __PolicyConfig_FWD_DEFINED__
#define __PolicyConfig_FWD_DEFINED__

#ifdef __cplusplus
typedef class PolicyConfig PolicyConfig;
#else
typedef struct PolicyConfig PolicyConfig;
#endif /* __cplusplus */

#endif 	/* __PolicyConfig_FWD_DEFINED__ */

#ifndef __IPolicyConfig_INTERFACE_DEFINED__
#define __IPolicyConfig_INTERFACE_DEFINED__

/* interface IPolicyConfig */
/* [unique][helpstring][nonextensible][uuid][local][object] */ 


EXTERN_C const IID IID_IPolicyConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("568B9108-44BF-40B4-9006-86AFE5B5A620")
    IPolicyConfig : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMixFormat(
            /* [in] */ 
            __in  LPCWSTR lpcwstrDeviceId,
            /* [in] */ 
            __out WAVEFORMATEX **ppwfxDeviceFormat) = 0;
        virtual HRESULT STDMETHODCALLTYPE GetDeviceFormat() = 0;
        virtual HRESULT STDMETHODCALLTYPE SetDeviceFormat() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetProcessingPeriod() = 0;
        virtual HRESULT STDMETHODCALLTYPE SetProcessingPeriod() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetShareMode() = 0;
        virtual HRESULT STDMETHODCALLTYPE SetShareMode() = 0;
        virtual HRESULT STDMETHODCALLTYPE GetPropertyValue() = 0;
        virtual HRESULT STDMETHODCALLTYPE SetPropertyValue() = 0;
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDefaultEndpoint( 
            /* [in] */ 
            __in  LPCWSTR lpcwstrDeviceId,
            /* [in] */ 
            __in  ERole role) = 0;
        virtual HRESULT STDMETHODCALLTYPE SetEndpointVisibility(
            /* [in] */ 
            __in  LPCWSTR lpcwstrDeviceId,
            /* [in] */ 
            __in  BOOL visibility) = 0;
        // virtual HRESULT STDMETHODCALLTYPE Deleting Destructor() = 0;
    };
    
#endif

#endif 	/* __IPolicyConfig_INTERFACE_DEFINED__ */

EXTERN_C const CLSID CLSID_PolicyConfig;

#ifdef __cplusplus

class DECLSPEC_UUID("294935CE-F637-4E7C-A41B-AB255460B862")
PolicyConfig;
#endif

/* End for Hidden Audio Core Api: PolicyConfig */

#define EXIT_ON_ERROR(hres)  \
              if (FAILED(hres)) { goto Exit; }

#define SAFE_RELEASE(punk)  \
              if ((punk) != NULL)  \
                { (punk)->Release(); (punk) = NULL; }

// Event context GUID (generated by uuidgen.exe)
// { E6FAC30B-2E3D-484B-ACDA-7146DB4849C0 }
GUID g_EventContext =
{
    0XE6FAC30B,
    0X2E3D,
    0X484B,
    { 0XAC, 0XDA, 0X71, 0X46, 0XDB, 0X48, 0X49, 0XC0 }
};

typedef struct {
    IMMDeviceEnumerator *pEnumerator;
    IMMDeviceCollection *pCaptureCollection;
    IPolicyConfig *pPolicyConfig;
} InternalDeviceInfo;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* AUDIO_INTERNAL_H*/