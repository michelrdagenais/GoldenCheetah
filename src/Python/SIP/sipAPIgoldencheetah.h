/*
 * Internal module API header file.
 *
 * Generated by SIP 4.19.6
 */

#ifndef _goldencheetahAPI_H
#define _goldencheetahAPI_H

#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_PythonDataSeries 0
#define sipName_PythonDataSeries &sipStrings_goldencheetah[0]
#define sipNameNr_seriesPresent 17
#define sipName_seriesPresent &sipStrings_goldencheetah[17]
#define sipNameNr_goldencheetah 31
#define sipName_goldencheetah &sipStrings_goldencheetah[31]
#define sipNameNr___getitem__ 45
#define sipName___getitem__ &sipStrings_goldencheetah[45]
#define sipNameNr_seriesLast 57
#define sipName_seriesLast &sipStrings_goldencheetah[57]
#define sipNameNr_seriesName 68
#define sipName_seriesName &sipStrings_goldencheetah[68]
#define sipNameNr_threadid 79
#define sipName_threadid &sipStrings_goldencheetah[79]
#define sipNameNr_Bindings 88
#define sipName_Bindings &sipStrings_goldencheetah[88]
#define sipNameNr_version 97
#define sipName_version &sipStrings_goldencheetah[97]
#define sipNameNr_athlete 105
#define sipName_athlete &sipStrings_goldencheetah[105]
#define sipNameNr___len__ 113
#define sipName___len__ &sipStrings_goldencheetah[113]
#define sipNameNr___str__ 121
#define sipName___str__ &sipStrings_goldencheetah[121]
#define sipNameNr_QString 129
#define sipName_QString &sipStrings_goldencheetah[129]
#define sipNameNr_series 137
#define sipName_series &sipStrings_goldencheetah[137]
#define sipNameNr_build 144
#define sipName_build &sipStrings_goldencheetah[144]

#define sipMalloc                   sipAPI_goldencheetah->api_malloc
#define sipFree                     sipAPI_goldencheetah->api_free
#define sipBuildResult              sipAPI_goldencheetah->api_build_result
#define sipCallMethod               sipAPI_goldencheetah->api_call_method
#define sipCallProcedureMethod      sipAPI_goldencheetah->api_call_procedure_method
#define sipCallErrorHandler         sipAPI_goldencheetah->api_call_error_handler
#define sipParseResultEx            sipAPI_goldencheetah->api_parse_result_ex
#define sipParseResult              sipAPI_goldencheetah->api_parse_result
#define sipParseArgs                sipAPI_goldencheetah->api_parse_args
#define sipParseKwdArgs             sipAPI_goldencheetah->api_parse_kwd_args
#define sipParsePair                sipAPI_goldencheetah->api_parse_pair
#define sipInstanceDestroyed        sipAPI_goldencheetah->api_instance_destroyed
#define sipConvertFromSequenceIndex sipAPI_goldencheetah->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_goldencheetah->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_goldencheetah->api_convert_to_void_ptr
#define sipAddException             sipAPI_goldencheetah->api_add_exception
#define sipNoFunction               sipAPI_goldencheetah->api_no_function
#define sipNoMethod                 sipAPI_goldencheetah->api_no_method
#define sipAbstractMethod           sipAPI_goldencheetah->api_abstract_method
#define sipBadClass                 sipAPI_goldencheetah->api_bad_class
#define sipBadCatcherResult         sipAPI_goldencheetah->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_goldencheetah->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_goldencheetah->api_bad_operator_arg
#define sipTrace                    sipAPI_goldencheetah->api_trace
#define sipTransferBack             sipAPI_goldencheetah->api_transfer_back
#define sipTransferTo               sipAPI_goldencheetah->api_transfer_to
#define sipTransferBreak            sipAPI_goldencheetah->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_goldencheetah->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_goldencheetah->api_wrapper_type
#define sipWrapperType_Type         sipAPI_goldencheetah->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_goldencheetah->api_voidptr_type
#define sipGetPyObject              sipAPI_goldencheetah->api_get_pyobject
#define sipGetAddress               sipAPI_goldencheetah->api_get_address
#define sipGetMixinAddress          sipAPI_goldencheetah->api_get_mixin_address
#define sipGetCppPtr                sipAPI_goldencheetah->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_goldencheetah->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_goldencheetah->api_is_py_method
#define sipCallHook                 sipAPI_goldencheetah->api_call_hook
#define sipEndThread                sipAPI_goldencheetah->api_end_thread
#define sipConnectRx                sipAPI_goldencheetah->api_connect_rx
#define sipDisconnectRx             sipAPI_goldencheetah->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_goldencheetah->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_goldencheetah->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_goldencheetah->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_goldencheetah->api_add_type_instance
#define sipFreeSipslot              sipAPI_goldencheetah->api_free_sipslot
#define sipSameSlot                 sipAPI_goldencheetah->api_same_slot
#define sipPySlotExtend             sipAPI_goldencheetah->api_pyslot_extend
#define sipConvertRx                sipAPI_goldencheetah->api_convert_rx
#define sipAddDelayedDtor           sipAPI_goldencheetah->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_goldencheetah->api_can_convert_to_type
#define sipConvertToType            sipAPI_goldencheetah->api_convert_to_type
#define sipForceConvertToType       sipAPI_goldencheetah->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_goldencheetah->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI_goldencheetah->api_convert_to_enum
#define sipConvertToBool            sipAPI_goldencheetah->api_convert_to_bool
#define sipReleaseType              sipAPI_goldencheetah->api_release_type
#define sipConvertFromType          sipAPI_goldencheetah->api_convert_from_type
#define sipConvertFromNewType       sipAPI_goldencheetah->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_goldencheetah->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_goldencheetah->api_convert_from_enum
#define sipGetState                 sipAPI_goldencheetah->api_get_state
#define sipExportSymbol             sipAPI_goldencheetah->api_export_symbol
#define sipImportSymbol             sipAPI_goldencheetah->api_import_symbol
#define sipFindType                 sipAPI_goldencheetah->api_find_type
#define sipFindNamedEnum            sipAPI_goldencheetah->api_find_named_enum
#define sipBytes_AsChar             sipAPI_goldencheetah->api_bytes_as_char
#define sipBytes_AsString           sipAPI_goldencheetah->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_goldencheetah->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_goldencheetah->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_goldencheetah->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_goldencheetah->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_goldencheetah->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_goldencheetah->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_goldencheetah->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_goldencheetah->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_goldencheetah->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_goldencheetah->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_goldencheetah->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_goldencheetah->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_goldencheetah->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_goldencheetah->api_save_slot
#define sipClearAnySlotReference    sipAPI_goldencheetah->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_goldencheetah->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI_goldencheetah->api_deprecated
#define sipGetReference             sipAPI_goldencheetah->api_get_reference
#define sipKeepReference            sipAPI_goldencheetah->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_goldencheetah->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_goldencheetah->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_goldencheetah->api_type_from_py_type_object
#define sipTypeScope                sipAPI_goldencheetah->api_type_scope
#define sipResolveTypedef           sipAPI_goldencheetah->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_goldencheetah->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_goldencheetah->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_goldencheetah->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_goldencheetah->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI_goldencheetah->api_enable_overflow_checking
#define sipInitMixin                sipAPI_goldencheetah->api_init_mixin
#define sipExportModule             sipAPI_goldencheetah->api_export_module
#define sipInitModule               sipAPI_goldencheetah->api_init_module
#define sipGetInterpreter           sipAPI_goldencheetah->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI_goldencheetah->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI_goldencheetah->api_set_type_user_data
#define sipGetTypeUserData          sipAPI_goldencheetah->api_get_type_user_data
#define sipPyTypeDict               sipAPI_goldencheetah->api_py_type_dict
#define sipPyTypeName               sipAPI_goldencheetah->api_py_type_name
#define sipGetCFunction             sipAPI_goldencheetah->api_get_c_function
#define sipGetMethod                sipAPI_goldencheetah->api_get_method
#define sipFromMethod               sipAPI_goldencheetah->api_from_method
#define sipGetDate                  sipAPI_goldencheetah->api_get_date
#define sipFromDate                 sipAPI_goldencheetah->api_from_date
#define sipGetDateTime              sipAPI_goldencheetah->api_get_datetime
#define sipFromDateTime             sipAPI_goldencheetah->api_from_datetime
#define sipGetTime                  sipAPI_goldencheetah->api_get_time
#define sipFromTime                 sipAPI_goldencheetah->api_from_time
#define sipIsUserType               sipAPI_goldencheetah->api_is_user_type
#define sipGetFrame                 sipAPI_goldencheetah->api_get_frame
#define sipCheckPluginForType       sipAPI_goldencheetah->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI_goldencheetah->api_unicode_new
#define sipUnicodeWrite             sipAPI_goldencheetah->api_unicode_write
#define sipUnicodeData              sipAPI_goldencheetah->api_unicode_data
#define sipGetBufferInfo            sipAPI_goldencheetah->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI_goldencheetah->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI_goldencheetah->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI_goldencheetah->api_is_derived_class
#define sipGetUserObject            sipAPI_goldencheetah->api_get_user_object
#define sipSetUserObject            sipAPI_goldencheetah->api_set_user_object
#define sipRegisterEventHandler     sipAPI_goldencheetah->api_register_event_handler
#define sipLong_AsChar              sipAPI_goldencheetah->api_long_as_char
#define sipLong_AsSignedChar        sipAPI_goldencheetah->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI_goldencheetah->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI_goldencheetah->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI_goldencheetah->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI_goldencheetah->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI_goldencheetah->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI_goldencheetah->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI_goldencheetah->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI_goldencheetah->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI_goldencheetah->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_goldencheetah->api_map_string_to_class
#define sipMapIntToClass            sipAPI_goldencheetah->api_map_int_to_class
#define sipFindClass                sipAPI_goldencheetah->api_find_class
#define sipFindMappedType           sipAPI_goldencheetah->api_find_mapped_type
#define sipConvertToArray           sipAPI_goldencheetah->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_goldencheetah->api_convert_to_typed_array
#define sipEnableGC                 sipAPI_goldencheetah->api_enable_gc
#define sipPrintObject              sipAPI_goldencheetah->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_goldencheetah->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings_goldencheetah[];

#define sipType_PythonDataSeries sipExportedTypes_goldencheetah[1]
#define sipClass_PythonDataSeries sipExportedTypes_goldencheetah[1]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_goldencheetah_PythonDataSeries;

#define sipType_Bindings sipExportedTypes_goldencheetah[0]
#define sipClass_Bindings sipExportedTypes_goldencheetah[0]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_goldencheetah_Bindings;

#define sipType_QString sipExportedTypes_goldencheetah[2]

extern sipMappedTypeDef sipTypeDef_goldencheetah_QString;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_goldencheetah;
extern sipExportedModuleDef sipModuleAPI_goldencheetah;
extern sipTypeDef *sipExportedTypes_goldencheetah[];

#endif
