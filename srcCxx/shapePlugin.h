

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from shape.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef shapePlugin_1640425871_h
#define shapePlugin_1640425871_h

#include "shape.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C"{

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ShapeType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ShapeType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ShapeType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ShapeType.
    */
    typedef  class ShapeType ShapeTypeKeyHolder;

    #define ShapeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define ShapeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define ShapeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define ShapeTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define ShapeTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define ShapeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define ShapeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern ShapeType*
    ShapeTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern ShapeType*
    ShapeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ShapeType*
    ShapeTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    ShapeTypePluginSupport_copy_data(
        ShapeType *out,
        const ShapeType *in);

    NDDSUSERDllExport extern void 
    ShapeTypePluginSupport_destroy_data_w_params(
        ShapeType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    ShapeTypePluginSupport_destroy_data_ex(
        ShapeType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ShapeTypePluginSupport_destroy_data(
        ShapeType *sample);

    NDDSUSERDllExport extern void 
    ShapeTypePluginSupport_print_data(
        const ShapeType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern ShapeType*
    ShapeTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern ShapeType*
    ShapeTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    ShapeTypePluginSupport_destroy_key_ex(
        ShapeTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    ShapeTypePluginSupport_destroy_key(
        ShapeTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    ShapeTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    ShapeTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    ShapeTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    ShapeTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    ShapeTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShapeType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    ShapeTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        ShapeType *out,
        const ShapeType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    ShapeTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const ShapeType *sample); 

    NDDSUSERDllExport extern RTIBool
    ShapeTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const ShapeType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool
    ShapeTypePlugin_deserialize_from_cdr_buffer(
        ShapeType *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    ShapeTypePlugin_data_to_string(
        const ShapeType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    ShapeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    ShapeTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    ShapeTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    ShapeTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    ShapeTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        ShapeType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    ShapeTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        ShapeTypeKeyHolder *key, 
        const ShapeType *instance);

    NDDSUSERDllExport extern RTIBool 
    ShapeTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        ShapeType *instance, 
        const ShapeTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    ShapeTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms * ShapeTypePlugin_get_programs(void);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    ShapeTypePlugin_new(void);

    NDDSUSERDllExport extern void
    ShapeTypePlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* shapePlugin_1640425871_h */

