﻿#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct ConstrainedActionInvoker2
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[1]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t0DC7FD3990CADE5F2381420B51B1E30A35200BCA;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902;
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05;
struct Dictionary_2_t36FA7EC1E5B0BD4419B32EB5EBD5DFA984D70CEA;
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
struct Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041;
struct Dictionary_2_tB9FCA898D75EAA83E11A28DF6935164AA8CA11A3;
struct Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68;
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A;
struct Dictionary_2_t157A4914F029A406F78B10B4418C1C55A8B74123;
struct Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4;
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
struct KeyCollection_tE2F56A37776137F5D3C1BA6C49999EF1EC0E216F;
struct KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D;
struct KeyCollection_t17F48A56261D4818902A40FC6E9DA7C169F0977D;
struct KeyCollection_t93BA33CAAB790A133B7B7EEC9B64BDFC458582F2;
struct KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A;
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t77ED838FA3E673D6D8B49578EE1F27A0836DE6A9;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
struct UnsafeList_1_t3320408FA0A297D3C409FA7ADF6C1788C8AFBDA3;
struct UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391;
struct ValueCollection_tAD56DF94D7373625A22E80E942606DC8509CB6D2;
struct ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430;
struct ValueCollection_tB78323D6CF1D86B84D0E4391B6ED2AF96F8CEC72;
struct ValueCollection_t33B4D2D5E7ED2150F6E4AEABF9B5EA9F5DB3C8C1;
struct ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B;
struct EntryU5BU5D_tD80C7495BA8BE64BC139A54FA961AB3EC66D7319;
struct EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD;
struct EntryU5BU5D_t36E386D011753C1AC6BD8C52DF05B12057A89AF6;
struct EntryU5BU5D_t7DA5B3205EE1A19C131521D91ABEC2F23610DFC9;
struct EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3;
struct SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct MessageHandlerU5BU5D_t37F554C81ABFEC39C9C736771CA2A327BA2A6330;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnticipationSystem_t4898B59C04A6EFD6A1CCC840893123F889674771;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
struct IDeferredNetworkMessageManager_t16B56EB08D165ABBD988A4AD6F3C196CDA906B91;
struct INetworkHooks_t0661E1D4E1A1C18135CA440AC01EDAA733B83533;
struct INetworkMessageSender_t0E6CABACEA7C05580183A510AEC178C2C640D48A;
struct IRealTimeProvider_tC07CE9B2635CCAC97C12E223B7175A92BF89522D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE;
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
struct NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1;
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468;
struct NetworkMetricsManager_tD9F432E8A6803DEC0B9BEB12E72EDD552AEB8987;
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
struct NetworkTransform_tACB1B87A737F6EBABC9AD70FDF9DFCDD7ABBF37E;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RpcTarget_t0F23BD75DF373B0172AD08117DB945D6CD994832;
struct SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SessionConfig_t855F8BEF030B72CECE88C5432BE60F8D5BF27C93;
struct String_t;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
struct OnFetchLocalPlayerPrefabToSpawnDelegateHandler_t0EE47858B2378E02523136568BBD485E47AD47C4;
struct OnGetSessionConfigHandler_tA80D9AEECAD8D8B5C2BC26EE063D624DF2F01790;
struct OnSessionOwnerPromotedDelegateHandler_tBCD29D20349708D053212C932547D0D077AB978A;
struct SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24A068FAA5FD857531028973A5A72E792BFEA1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7021ABA1AFBD4E3E2F78826FAFDAFAEB69472D;
IL2CPP_EXTERN_C String_t* _stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3EF4F6B2EC138E3A20BD7549CE6DE54B0608CD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m86D30D35D7D850E4F407BBA5D3FFD3E9CF98DFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD80C7495BA8BE64BC139A54FA961AB3EC66D7319* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE2F56A37776137F5D3C1BA6C49999EF1EC0E216F* ____keys;
	ValueCollection_tAD56DF94D7373625A22E80E942606DC8509CB6D2* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t03249998F750A38A50294764FE8B3C034F75ABCD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA77FD1F3C4B579CC5CA9D12CD06FA2F0191A019D* ____keys;
	ValueCollection_t20A674BBDAA1BDD52D1C302860E5F9DF7390F430* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t36E386D011753C1AC6BD8C52DF05B12057A89AF6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t17F48A56261D4818902A40FC6E9DA7C169F0977D* ____keys;
	ValueCollection_tB78323D6CF1D86B84D0E4391B6ED2AF96F8CEC72* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7DA5B3205EE1A19C131521D91ABEC2F23610DFC9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t93BA33CAAB790A133B7B7EEC9B64BDFC458582F2* ____keys;
	ValueCollection_t33B4D2D5E7ED2150F6E4AEABF9B5EA9F5DB3C8C1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A* ____keys;
	ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B* ____values;
	RuntimeObject* ____syncRoot;
};
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810  : public RuntimeObject
{
	INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 
{
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___m_Data;
};
struct NativeList_1_t244AB70F86E3DE6A3C8F7DE0CE70E58B90A72AAB 
{
	UnsafeList_1_t3320408FA0A297D3C409FA7ADF6C1788C8AFBDA3* ___m_ListData;
};
struct NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB 
{
	UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* ___m_ListData;
};
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	bool ___hasValue;
	uint64_t ___value;
};
struct Override_1_tC50588F2091AF16B0931A185E37A0BABA586D1A6 
{
	uint16_t ___m_Value;
	bool ___U3COveriddenU3Ek__BackingField;
};
struct PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 
{
	uint64_t* ___m_Value;
	int32_t ___m_Length;
};
struct AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440 
{
	uint64_t ___Counter;
	double ___Time;
};
struct AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F 
{
	uint64_t ___Counter;
	double ___Time;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103 
{
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___RequestClientId;
	int32_t ___ClientIdCount;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ClientIds;
	bool ___DistributedAuthorityMode;
	uint16_t ___OwnershipFlags;
	uint8_t ___OwnershipRequestResponseStatus;
	uint8_t ___m_OwnershipMessageTypeFlags;
};
struct ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___RequestClientId;
	int32_t ___ClientIdCount;
	Il2CppSafeArray* ___ClientIds;
	int32_t ___DistributedAuthorityMode;
	uint16_t ___OwnershipFlags;
	uint8_t ___OwnershipRequestResponseStatus;
	uint8_t ___m_OwnershipMessageTypeFlags;
};
struct ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint64_t ___RequestClientId;
	int32_t ___ClientIdCount;
	Il2CppSafeArray* ___ClientIds;
	int32_t ___DistributedAuthorityMode;
	uint16_t ___OwnershipFlags;
	uint8_t ___OwnershipRequestResponseStatus;
	uint8_t ___m_OwnershipMessageTypeFlags;
};
struct ClientConfig_t0E82D192B9D4C898A44F74A692428869F5B016D8 
{
	SessionConfig_t855F8BEF030B72CECE88C5432BE60F8D5BF27C93* ___SessionConfig;
	uint32_t ___TickRate;
	bool ___EnableSceneManagement;
	int32_t ___RemoteClientSessionVersion;
};
struct ClientConfig_t0E82D192B9D4C898A44F74A692428869F5B016D8_marshaled_pinvoke
{
	SessionConfig_t855F8BEF030B72CECE88C5432BE60F8D5BF27C93* ___SessionConfig;
	uint32_t ___TickRate;
	int32_t ___EnableSceneManagement;
	int32_t ___RemoteClientSessionVersion;
};
struct ClientConfig_t0E82D192B9D4C898A44F74A692428869F5B016D8_marshaled_com
{
	SessionConfig_t855F8BEF030B72CECE88C5432BE60F8D5BF27C93* ___SessionConfig;
	uint32_t ___TickRate;
	int32_t ___EnableSceneManagement;
	int32_t ___RemoteClientSessionVersion;
};
struct ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E 
{
	uint64_t ___ClientId;
	bool ___ShouldSynchronize;
};
struct ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_marshaled_pinvoke
{
	uint64_t ___ClientId;
	int32_t ___ShouldSynchronize;
};
struct ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_marshaled_com
{
	uint64_t ___ClientId;
	int32_t ___ShouldSynchronize;
};
struct ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5 
{
	uint64_t ___ClientId;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050 
{
	uint64_t ___NetworkObjectId;
	bool ___DestroyGameObject;
	uint8_t ___m_DestroyFlags;
	int32_t ___DeferredDespawnTick;
	uint64_t ___TargetClientId;
	bool ___IsDistributedAuthority;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	int32_t ___DestroyGameObject;
	uint8_t ___m_DestroyFlags;
	int32_t ___DeferredDespawnTick;
	uint64_t ___TargetClientId;
	int32_t ___IsDistributedAuthority;
};
struct DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_marshaled_com
{
	uint64_t ___NetworkObjectId;
	int32_t ___DestroyGameObject;
	uint8_t ___m_DestroyFlags;
	int32_t ___DeferredDespawnTick;
	uint64_t ___TargetClientId;
	int32_t ___IsDistributedAuthority;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4 
{
	String_t* ___Reason;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_marshaled_pinvoke
{
	char* ___Reason;
};
struct DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_marshaled_com
{
	Il2CppChar* ___Reason;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA 
{
	uint16_t ___Magic;
	uint16_t ___BatchCount;
	int32_t ___BatchSize;
	uint64_t ___BatchHash;
};
struct NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 
{
	uint32_t ___MessageType;
	uint32_t ___MessageSize;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB 
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourId;
	uint32_t ___NetworkRpcMethodId;
};
struct ServiceConfig_t8AD66E5239E5DF9C8DBD157E0E489EC229D449B0 
{
	uint32_t ___SessionVersion;
	bool ___IsRestoredSession;
	uint64_t ___CurrentSessionOwner;
	bool ___ServerRedistribution;
	uint64_t ___SessionStateToken;
};
struct ServiceConfig_t8AD66E5239E5DF9C8DBD157E0E489EC229D449B0_marshaled_pinvoke
{
	uint32_t ___SessionVersion;
	int32_t ___IsRestoredSession;
	uint64_t ___CurrentSessionOwner;
	int32_t ___ServerRedistribution;
	uint64_t ___SessionStateToken;
};
struct ServiceConfig_t8AD66E5239E5DF9C8DBD157E0E489EC229D449B0_marshaled_com
{
	uint32_t ___SessionVersion;
	int32_t ___IsRestoredSession;
	uint64_t ___CurrentSessionOwner;
	int32_t ___ServerRedistribution;
	uint64_t ___SessionStateToken;
};
struct SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83 
{
	uint64_t ___SessionOwner;
};
struct TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471 
{
	int32_t ___Tick;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 
{
	bool ___x;
	bool ___y;
	bool ___z;
};
struct half_tE8A6792149696F478D662DD4B736964C0FF018AF 
{
	uint16_t ___value;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391 
{
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct LogLevel_t013BB6EFADA5632CBEF01C893E572DBE8FC2985B 
{
	int32_t ___value__;
};
struct NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93 
{
	uint64_t ___Hash;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___SendData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceiveData;
};
struct NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD 
{
	int32_t ___value__;
};
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468  : public RuntimeObject
{
	bool ___StopProcessing;
	NativeList_1_t244AB70F86E3DE6A3C8F7DE0CE70E58B90A72AAB ___m_IncomingMessageQueue;
	MessageHandlerU5BU5D_t37F554C81ABFEC39C9C736771CA2A327BA2A6330* ___m_MessageHandlers;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_ReverseTypeMap;
	Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* ___m_MessageTypes;
	Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* ___m_SendQueues;
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_DisconnectedClients;
	Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041* ___m_PerClientMessageVersions;
	Dictionary_2_t36FA7EC1E5B0BD4419B32EB5EBD5DFA984D70CEA* ___m_MessagesByHash;
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___m_LocalVersions;
	List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* ___m_Hooks;
	uint32_t ___m_HighMessageType;
	RuntimeObject* ___m_Owner;
	RuntimeObject* ___m_Sender;
	bool ___m_Disposed;
	uint64_t ___m_LocalClientId;
	int32_t ___NonFragmentedMessageMaxSize;
	int32_t ___FragmentedMessageMaxSize;
	Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* ___PeerMTUSizes;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD 
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint8_t ___m_BitField;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	uint64_t ___SenderClientId;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601 
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_marshaled_pinvoke
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_marshaled_com
{
	SceneEventData_t8DB345D4832D426FECD40BDA27C50585CE95F028* ___EventData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB 
{
	RpcMetadata_tE74AD5371E483CE03EE1D152A9DDE1221F1ED4AB ___Metadata;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___WriteBuffer;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___ReadBuffer;
};
struct UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977 
{
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___SendData;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedData;
};
struct half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
};
struct half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 
{
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___x;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___y;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___z;
	half_tE8A6792149696F478D662DD4B736964C0FF018AF ___w;
};
struct LogType_tFE50293A062A1F7799608EC19897695BC9EFA0B7 
{
	uint8_t ___value__;
};
struct ServerShutdownStates_t86F3C90010A36FEC7E6FF8B9A8E93446D518056F 
{
	int32_t ___value__;
};
struct TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 
{
	half3_tE87D06748FC18B6C9237D910911C43754C0E4AD8 ___Axis;
	bool3_tFD58BE2745DA207A4938AB2F604C829410F0A861 ___AxisToSynchronize;
};
struct HalfVector4_t493672846617D0E05AE7C0B3E38E7B460948A1BD 
{
	half4_t69CC75C393FD0ED1CEFC8B6F1C0FBE7746CF9826 ___Axis;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A 
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	int32_t ___NetworkDelivery;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
	bool ___m_ForwardingMessage;
	int32_t ___m_ReceivedMessageVersion;
	Dictionary_2_tB9FCA898D75EAA83E11A28DF6935164AA8CA11A3* ___m_ForwardUpdates;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_UpdatedNetworkVariables;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	int32_t ___NetworkDelivery;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
	int32_t ___m_ForwardingMessage;
	int32_t ___m_ReceivedMessageVersion;
	Dictionary_2_tB9FCA898D75EAA83E11A28DF6935164AA8CA11A3* ___m_ForwardUpdates;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_UpdatedNetworkVariables;
};
struct NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_marshaled_com
{
	uint64_t ___NetworkObjectId;
	uint16_t ___NetworkBehaviourIndex;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___DeliveryMappedNetworkVariableIndex;
	uint64_t ___TargetClientId;
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___NetworkBehaviour;
	int32_t ___NetworkDelivery;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
	int32_t ___m_ForwardingMessage;
	int32_t ___m_ReceivedMessageVersion;
	Dictionary_2_tB9FCA898D75EAA83E11A28DF6935164AA8CA11A3* ___m_ForwardUpdates;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_UpdatedNetworkVariables;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D 
{
	uint64_t ___SenderId;
	uint8_t ___LogType;
	String_t* ___Message;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_marshaled_pinvoke
{
	uint64_t ___SenderId;
	uint8_t ___LogType;
	char* ___Message;
};
struct ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_marshaled_com
{
	uint64_t ___SenderId;
	uint8_t ___LogType;
	Il2CppChar* ___Message;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	bool ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer;
	int32_t ___Position;
	int32_t ___Length;
	int32_t ___Capacity;
	int32_t ___MaxCapacity;
	int32_t ___Allocator;
	int32_t ___BufferGrew;
};
struct SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 
{
	NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA ___BatchHeader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___Writer;
	int32_t ___NetworkDelivery;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5 
{
	uint16_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint16_t ___OwnershipFlags;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___Observers;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_pinvoke
{
	uint16_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint16_t ___OwnershipFlags;
	Il2CppSafeArray* ___Observers;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_com
{
	uint16_t ___m_BitField;
	uint32_t ___Hash;
	uint64_t ___NetworkObjectId;
	uint64_t ___OwnerClientId;
	uint16_t ___OwnershipFlags;
	Il2CppSafeArray* ___Observers;
	uint64_t ___ParentObjectId;
	TransformData_t4062B6AC0185B2680A3F5904FF85BADD71D79B8C ___Transform;
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___LatestParent;
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___OwnerObject;
	uint64_t ___TargetClientId;
	int32_t ___NetworkSceneHandle;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58 
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	ServiceConfig_t8AD66E5239E5DF9C8DBD157E0E489EC229D449B0 ___ServiceConfig;
	bool ___IsRestoredSession;
	uint64_t ___CurrentSessionOwner;
	bool ___IsDistributedAuthority;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
	int32_t ___m_ReceiveMessageVersion;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_marshaled_pinvoke
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	ServiceConfig_t8AD66E5239E5DF9C8DBD157E0E489EC229D449B0_marshaled_pinvoke ___ServiceConfig;
	int32_t ___IsRestoredSession;
	uint64_t ___CurrentSessionOwner;
	int32_t ___IsDistributedAuthority;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
	int32_t ___m_ReceiveMessageVersion;
};
struct ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_marshaled_com
{
	uint64_t ___OwnerClientId;
	int32_t ___NetworkTick;
	ServiceConfig_t8AD66E5239E5DF9C8DBD157E0E489EC229D449B0_marshaled_com ___ServiceConfig;
	int32_t ___IsRestoredSession;
	uint64_t ___CurrentSessionOwner;
	int32_t ___IsDistributedAuthority;
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___SpawnedObjectsList;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedSceneObjectData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___ConnectedClientIds;
	int32_t ___m_ReceiveMessageVersion;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876 
{
	uint64_t ___ConfigHash;
	bool ___DistributedAuthority;
	ClientConfig_t0E82D192B9D4C898A44F74A692428869F5B016D8 ___ClientConfig;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ConnectionData;
	bool ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_marshaled_pinvoke
{
	uint64_t ___ConfigHash;
	int32_t ___DistributedAuthority;
	ClientConfig_t0E82D192B9D4C898A44F74A692428869F5B016D8_marshaled_pinvoke ___ClientConfig;
	Il2CppSafeArray* ___ConnectionData;
	int32_t ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_marshaled_com
{
	uint64_t ___ConfigHash;
	int32_t ___DistributedAuthority;
	ClientConfig_t0E82D192B9D4C898A44F74A692428869F5B016D8_marshaled_com ___ClientConfig;
	Il2CppSafeArray* ___ConnectionData;
	int32_t ___ShouldSendConnectionData;
	NativeArray_1_t6B9B2B7BDBFEE32443B65053BABBCFDCAAB4B42F ___MessageVersions;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792 
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5 ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ObserverIds;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___NewObserverIds;
	uint64_t ___NetworkObjectId;
	uint8_t ___m_CreateObjectMessageTypeFlags;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_marshaled_pinvoke
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_pinvoke ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
	Il2CppSafeArray* ___ObserverIds;
	Il2CppSafeArray* ___NewObserverIds;
	uint64_t ___NetworkObjectId;
	uint8_t ___m_CreateObjectMessageTypeFlags;
};
struct CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_marshaled_com
{
	SceneObject_t88CFB0487FC4D6EA0320D1DF0192D33B737097D5_marshaled_com ___ObjectInfo;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_ReceivedNetworkVariableData;
	Il2CppSafeArray* ___ObserverIds;
	Il2CppSafeArray* ___NewObserverIds;
	uint64_t ___NetworkObjectId;
	uint8_t ___m_CreateObjectMessageTypeFlags;
};
struct NetworkDeltaPosition_tD1DE84F6587BF2B08490254D05F79F260D234FE9 
{
	HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 ___HalfVector3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentBasePosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PrecisionLossDelta;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HalfDeltaConvertedBack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PreviousPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	int32_t ___NetworkTick;
	bool ___SynchronizeBase;
	bool ___CollapsedDeltaIntoBase;
};
struct ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___TargetClientIds;
	int32_t ___Delivery;
	RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15 ___WrappedMessage;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED 
{
	uint32_t ___m_Bitset;
	double ___SentTime;
	float ___PositionX;
	float ___PositionY;
	float ___PositionZ;
	float ___RotAngleX;
	float ___RotAngleY;
	float ___RotAngleZ;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	float ___ScaleX;
	float ___ScaleY;
	float ___ScaleZ;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition;
	NetworkDeltaPosition_tD1DE84F6587BF2B08490254D05F79F260D234FE9 ___NetworkDeltaPosition;
	HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 ___HalfVectorScale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LossyScale;
	HalfVector4_t493672846617D0E05AE7C0B3E38E7B460948A1BD ___HalfVectorRotation;
	uint32_t ___QuaternionCompressed;
	bool ___U3CIsDirtyU3Ek__BackingField;
	int32_t ___U3CLastSerializedSizeU3Ek__BackingField;
	int32_t ___NetworkTick;
	int32_t ___StateId;
	bool ___ExplicitSet;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_Reader;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_Writer;
	HalfVector3_t921D176C4A9C03F0C05F55B8440B72BB3730EC02 ___HalfEulerRotation;
};
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	SessionConfig_t855F8BEF030B72CECE88C5432BE60F8D5BF27C93* ___SessionConfig;
	OnGetSessionConfigHandler_tA80D9AEECAD8D8B5C2BC26EE063D624DF2F01790* ___OnGetSessionConfig;
	bool ___U3CDistributedAuthorityModeU3Ek__BackingField;
	OnFetchLocalPlayerPrefabToSpawnDelegateHandler_t0EE47858B2378E02523136568BBD485E47AD47C4* ___OnFetchLocalPlayerPrefabToSpawn;
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___ClientsToRedistribute;
	bool ___RedistributeToClients;
	List_1_t77ED838FA3E673D6D8B49578EE1F27A0836DE6A9* ___DeferredDespawnObjects;
	uint64_t ___U3CCurrentSessionOwnerU3Ek__BackingField;
	OnSessionOwnerPromotedDelegateHandler_tBCD29D20349708D053212C932547D0D077AB978A* ___OnSessionOwnerPromoted;
	Dictionary_2_t157A4914F029A406F78B10B4418C1C55A8B74123* ___NetworkTransformUpdate;
	Dictionary_2_t157A4914F029A406F78B10B4418C1C55A8B74123* ___NetworkTransformFixedUpdate;
	int32_t ___ServerShutdownState;
	float ___m_ShutdownTimeout;
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients;
	bool ___m_ShuttingDown;
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig;
	bool ___RunInBackground;
	int32_t ___LogLevel;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnClientStarted;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnPreShutdown;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnServerStopped;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnClientStopped;
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler;
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField;
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField;
	RpcTarget_t0F23BD75DF373B0172AD08117DB945D6CD994832* ___RpcTarget;
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField;
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField;
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField;
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField;
	AnticipationSystem_t4898B59C04A6EFD6A1CCC840893123F889674771* ___U3CAnticipationSystemU3Ek__BackingField;
	RuntimeObject* ___U3CRealTimeProviderU3Ek__BackingField;
	NetworkMetricsManager_tD9F432E8A6803DEC0B9BEB12E72EDD552AEB8987* ___MetricsManager;
	NetworkConnectionManager_tA2D96DEF071554C2E75CC52EEBC28BF0C977B9D1* ___ConnectionManager;
	NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* ___MessageManager;
	Override_1_tC50588F2091AF16B0931A185E37A0BABA586D1A6 ___PortOverride;
};
struct NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70 
{
	NetworkTransform_tACB1B87A737F6EBABC9AD70FDF9DFCDD7ABBF37E* ___NetworkTransform;
	NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED ___State;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_CurrentReader;
	int32_t ___BytesWritten;
};
struct NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70_marshaled_pinvoke
{
	NetworkTransform_tACB1B87A737F6EBABC9AD70FDF9DFCDD7ABBF37E* ___NetworkTransform;
	NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED ___State;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_CurrentReader;
	int32_t ___BytesWritten;
};
struct NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70_marshaled_com
{
	NetworkTransform_tACB1B87A737F6EBABC9AD70FDF9DFCDD7ABBF37E* ___NetworkTransform;
	NetworkTransformState_tCCC77820160AFE28825DDD9C3F090B523CA8F5ED ___State;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___m_CurrentReader;
	int32_t ___BytesWritten;
};
struct List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810_StaticFields
{
	INetworkHooksU5BU5D_t1BC65088C0304723E89381277637D587173A30DF* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache;
};
struct NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields
{
	Type_t* ___s_ConnectionApprovedType;
	Type_t* ___s_ConnectionRequestType;
	Type_t* ___s_DisconnectReasonType;
	bool ___EnableMessageOrderConsoleLog;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	Action_1_t0DC7FD3990CADE5F2381420B51B1E30A35200BCA* ___OnInstantiated;
	Action_1_t0DC7FD3990CADE5F2381420B51B1E30A35200BCA* ___OnDestroying;
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table;
	bool ___IsDistributedAuthority;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_gshared (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83_mEDF93DC3BC4BD40B1CACA7C62FFAF137FFA51565_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_gshared (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared (Dictionary_2_tA9CFEFF33EC9A214A3FA9A889B9D8EAE95A49902* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_gshared (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_gshared (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* __this, uint64_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared_inline (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_gshared (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared (Dictionary_2_t01A465CD199FB14D59FEC2DC7DDE76D2CD0A09F4* __this, uint64_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___0_key, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mD299B87C8E2D3789AF4B8D9180100B48D949CB60_gshared_inline (UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* __this, const RuntimeMethod* method) ;

inline int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_gshared)(__this, ___0_initialCapacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, int32_t, const RuntimeMethod*))PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Type_t* ___0_type, uint64_t ___1_clientId, bool ___2_forReceive, const RuntimeMethod* method) ;
inline bool NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147 (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, const RuntimeMethod*))NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_gshared)(__this, ___0_item, method);
}
inline bool NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992 (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, int32_t, const RuntimeMethod*))NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_gshared)(__this, ___0_item, method);
}
inline int32_t FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_size, int32_t ___1_allocator, int32_t ___2_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcMessage_Serialize_m364D337A54D4BAB922557F16EC9B7F0E51F9FCD1 (RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
inline void NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744*, const RuntimeMethod*))NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5 (SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLogMessage_Serialize_m75D84FCE387D3673972DEFF9C60DAC20569E951C (ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerRpcMessage_Serialize_m78B363B31FF63D5514A415E89C221F018CE90EBB (ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionOwnerMessage_Serialize_m749D186738C428CC7DCEA70282B1C350271D4B5F (SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisSessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83_mEDF93DC3BC4BD40B1CACA7C62FFAF137FFA51565 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisSessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83_mEDF93DC3BC4BD40B1CACA7C62FFAF137FFA51565_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280 (TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192 (UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, int32_t ___1_targetVersion, const RuntimeMethod* method) ;
inline int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared)(__this, ___0_tmpSerializer, ___1_maxSize, ___2_message, ___3_delivery, ___4_clientIds, ___5_messageVersionFilter, method);
}
inline void PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8 (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, uint64_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, uint64_t*, int32_t, const RuntimeMethod*))PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
inline int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared)(__this, ___0_message, ___1_delivery, ___2_clientIds, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
inline uint32_t Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2 (Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB12C3F9B6097F5E961B1B981546D7DDA39AB681A_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___0_writer, uint32_t ___1_value, const RuntimeMethod* method) ;
inline bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711 (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, uint64_t ___0_clientId, Type_t* ___1_messageType, int32_t ___2_delivery, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51 (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*, uint64_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9 (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline int32_t List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB (*) (Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68*, uint64_t, const RuntimeMethod*))Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_gshared)(__this, ___0_key, method);
}
inline int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, const RuntimeMethod*))NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56 (SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* __this, int32_t ___0_delivery, int32_t ___1_writerSize, int32_t ___2_writerAllocator, int32_t ___3_maxWriterSize, const RuntimeMethod* method) ;
inline void NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7*, const RuntimeMethod*))NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_gshared)(__this, ___0_value, method);
}
inline SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344 (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* (*) (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB*, int32_t, const RuntimeMethod*))NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_where, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m86D30D35D7D850E4F407BBA5D3FFD3E9CF98DFB5 (Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041* __this, uint64_t ___0_key, Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041*, uint64_t, Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455**, const RuntimeMethod*))Dictionary_2_TryGetValue_m610AC9FAFAA596802CD176D49D81FC2E15278ABF_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogWarning_m1A2073B527F4B95F216508B0E5A76DF71823D899 (String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_m3EF4F6B2EC138E3A20BD7549CE6DE54B0608CD4D (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* __this, Type_t* ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455*, Type_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_additionalSizeRequired, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_mD299B87C8E2D3789AF4B8D9180100B48D949CB60_inline (UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391*, const RuntimeMethod*))UnsafeList_1_get_Length_mD299B87C8E2D3789AF4B8D9180100B48D949CB60_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD11101F787FA71AE2077E5086BC4FD3A8785AD5F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				RpcMessage_Serialize_m364D337A54D4BAB922557F16EC9B7F0E51F9FCD1(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisRuntimeObject_mFFBA30695FFC4E00683D42946A25951FF36723D0_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject** L_13 = ___2_clientIds;
		RuntimeObject* L_14 = (*(RuntimeObject**)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_16;
		L_16 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_15);
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				SceneEventMessage_Serialize_m9BBAF1877F9962FBCC5714A6DD0921044D98AEC5(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				RuntimeObject** L_36 = ___2_clientIds;
				RuntimeObject* L_37 = (*(RuntimeObject**)L_36);
				V_8 = (RuntimeObject*)L_37;
				int32_t L_38 = V_4;
				int32_t L_39;
				L_39 = NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_38, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_39;
				int32_t L_40 = V_7;
				int32_t L_41 = V_0;
				if ((((int32_t)L_40) > ((int32_t)L_41)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_42 = V_0;
				G_B13_0 = L_42;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_43 = V_7;
				G_B13_0 = L_43;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0121:
	{
		int32_t L_45 = V_3;
		RuntimeObject** L_46 = ___2_clientIds;
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		V_2 = L_47;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_45) < ((int32_t)L_48)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_49 = V_0;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m73344DC114A97F4F5569E6536C9EF6D7F78BFE8B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				ServerLogMessage_Serialize_m75D84FCE387D3673972DEFF9C60DAC20569E951C(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m204C72052D5739D9FA78287D51A077020ACCFB8E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				ServerRpcMessage_Serialize_m78B363B31FF63D5514A415E89C221F018CE90EBB(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m927E897D76314778569DDA6714765D2FCBD7B986_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				SessionOwnerMessage_Serialize_m749D186738C428CC7DCEA70282B1C350271D4B5F(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisSessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83_mEDF93DC3BC4BD40B1CACA7C62FFAF137FFA51565(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisRuntimeObject_mC6E22D655D8765FDFB3C5F503B2C1109A651CE13_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject** L_13 = ___2_clientIds;
		RuntimeObject* L_14 = (*(RuntimeObject**)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_16;
		L_16 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_15);
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				TimeSyncMessage_Serialize_mC4D522537604EDFB129EFFBE531DA4DCDB9AE280(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				RuntimeObject** L_36 = ___2_clientIds;
				RuntimeObject* L_37 = (*(RuntimeObject**)L_36);
				V_8 = (RuntimeObject*)L_37;
				int32_t L_38 = V_4;
				int32_t L_39;
				L_39 = NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_38, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_39;
				int32_t L_40 = V_7;
				int32_t L_41 = V_0;
				if ((((int32_t)L_40) > ((int32_t)L_41)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_42 = V_0;
				G_B13_0 = L_42;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_43 = V_7;
				G_B13_0 = L_43;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0121:
	{
		int32_t L_45 = V_3;
		RuntimeObject** L_46 = ___2_clientIds;
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		V_2 = L_47;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_45) < ((int32_t)L_48)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_49 = V_0;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_0 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_1 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_0);
		V_2 = L_1;
		int32_t L_2;
		L_2 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_3 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_3);
		V_2 = L_4;
		int32_t L_5;
		L_5 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_13 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_14 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		uint64_t L_16;
		L_16 = PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_inline((&V_2), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_36 = ___2_clientIds;
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_37 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_36);
				PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_38 = L_37;
				RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_38);
				V_8 = (RuntimeObject*)L_39;
				int32_t L_40 = V_4;
				int32_t L_41;
				L_41 = NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_40, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_41;
				int32_t L_42 = V_7;
				int32_t L_43 = V_0;
				if ((((int32_t)L_42) > ((int32_t)L_43)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_44 = V_0;
				G_B13_0 = L_44;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_45 = V_7;
				G_B13_0 = L_45;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0121:
	{
		int32_t L_47 = V_3;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* L_48 = ___2_clientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_49 = (*(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*)L_48);
		V_2 = L_49;
		int32_t L_50;
		L_50 = PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_47) < ((int32_t)L_50)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_51 = V_0;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisRuntimeObject_m0034C81E06473B370A38595BCA7830218AF778B6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, RuntimeObject** ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		RuntimeObject** L_0 = ___2_clientIds;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		V_2 = L_1;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		RuntimeObject** L_3 = ___2_clientIds;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		V_2 = L_4;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_5, L_6, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_9 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_10;
		L_10 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject** L_13 = ___2_clientIds;
		RuntimeObject* L_14 = (*(RuntimeObject**)L_13);
		V_2 = L_14;
		int32_t L_15 = V_3;
		NullCheck((RuntimeObject*)(V_2));
		uint64_t L_16;
		L_16 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2), L_15);
		int32_t L_17;
		L_17 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_12, L_16, (bool)0, NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_19 = V_4;
		bool L_20;
		L_20 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_19, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		bool L_22;
		L_22 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_21, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_23 = ___1_delivery;
		if ((((int32_t)L_23) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_24 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_24;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_25 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_25;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_26 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_26, L_27)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_30 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_31 = V_6;
				int32_t L_32 = V_4;
				UnnamedMessage_Serialize_mAA47A32113A839FAC4F5197B2AB75CB587418192(L_30, L_31, L_32, il2cpp_rgctx_method(method->rgctx_data, 7));
				int32_t L_33 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_34 = ___0_message;
				int32_t L_35 = ___1_delivery;
				RuntimeObject** L_36 = ___2_clientIds;
				RuntimeObject* L_37 = (*(RuntimeObject**)L_36);
				V_8 = (RuntimeObject*)L_37;
				int32_t L_38 = V_4;
				int32_t L_39;
				L_39 = NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612(__this, (&V_6), L_33, L_34, L_35, (&V_8), L_38, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_39;
				int32_t L_40 = V_7;
				int32_t L_41 = V_0;
				if ((((int32_t)L_40) > ((int32_t)L_41)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_42 = V_0;
				G_B13_0 = L_42;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_43 = V_7;
				G_B13_0 = L_43;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0121:
	{
		int32_t L_45 = V_3;
		RuntimeObject** L_46 = ___2_clientIds;
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		V_2 = L_47;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		if ((((int32_t)L_45) < ((int32_t)L_48)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_49 = V_0;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m98ED23C85B854B894EC3815376E71B2A80F99D81_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, Il2CppFullySharedGenericAny* ___2_clientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_36 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 6)));
	void* L_53 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_16 = L_1;
	const Il2CppFullySharedGenericAny L_41 = L_1;
	const Il2CppFullySharedGenericAny L_52 = L_1;
	int32_t V_0 = 0;
	NativeHashSet_1_tDF4BDD3464F274C752983DB60D630F50E6A64744 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	memset(V_2, 0, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_1, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_3;
		L_3 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, (void*)(Il2CppFullySharedGenericAny*)V_2);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		V_0 = 0;
		Il2CppFullySharedGenericAny* L_4 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_7;
		L_7 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_2);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8;
		L_8 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A((&V_1), L_7, L_8, NativeHashSet_1__ctor_m248D28782C7E6FB2BFD52CF730FA97753A95854A_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0121;
	}

IL_0042:
	{
		V_4 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_11 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		Il2CppFullySharedGenericAny* L_15 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_16, L_15, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_16, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_17 = V_3;
		uint64_t L_19;
		L_19 = ConstrainedFuncInvoker1< uint64_t, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_18, (void*)(Il2CppFullySharedGenericAny*)V_2, L_17);
		int32_t L_20;
		L_20 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_14, L_19, (bool)0, NULL);
		V_4 = L_20;
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_011d;
		}
	}

IL_008b:
	{
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147((&V_1), L_22, NativeHashSet_1_Contains_mFBB15DC12D6B3E53F737B9C28C037D362C2E1147_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_24 = V_4;
		bool L_25;
		L_25 = NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992((&V_1), L_24, NativeHashSet_1_Add_mB67F0FEDA3A1AAC916807470790ADC4386B2F992_RuntimeMethod_var);
		int32_t L_26 = ___1_delivery;
		if ((((int32_t)L_26) == ((int32_t)4)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_27 = __this->___NonFragmentedMessageMaxSize;
		G_B9_0 = L_27;
		goto IL_00b5;
	}

IL_00af:
	{
		int32_t L_28 = __this->___FragmentedMessageMaxSize;
		G_B9_0 = L_28;
	}

IL_00b5:
	{
		V_5 = G_B9_0;
		int32_t L_29 = __this->___NonFragmentedMessageMaxSize;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		int32_t L_31 = V_5;
		int32_t L_32;
		L_32 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_6), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), (int32_t)2, ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_6), NULL);
				return;
			}
		});
		try
		{
			{
				Il2CppFullySharedGenericAny* L_33 = ___0_message;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_34 = V_6;
				int32_t L_35 = V_4;
				ConstrainedActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 6), il2cpp_rgctx_method(method->rgctx_data, 7), L_36, (void*)L_33, L_34, L_35);
				int32_t L_37 = V_5;
				Il2CppFullySharedGenericAny* L_38 = ___0_message;
				int32_t L_39 = ___1_delivery;
				Il2CppFullySharedGenericAny* L_40 = ___2_clientIds;
				il2cpp_codegen_memcpy(L_41, L_40, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
				RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_41);
				V_8 = (RuntimeObject*)L_42;
				int32_t L_43 = V_4;
				int32_t L_44;
				L_44 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(__this, (&V_6), L_37, L_38, L_39, (&V_8), L_43, il2cpp_rgctx_method(method->rgctx_data, 8));
				V_7 = L_44;
				int32_t L_45 = V_7;
				int32_t L_46 = V_0;
				if ((((int32_t)L_45) > ((int32_t)L_46)))
				{
					goto IL_010a_1;
				}
			}
			{
				int32_t L_47 = V_0;
				G_B13_0 = L_47;
				goto IL_010c_1;
			}

IL_010a_1:
			{
				int32_t L_48 = V_7;
				G_B13_0 = L_48;
			}

IL_010c_1:
			{
				V_0 = G_B13_0;
				goto IL_011d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0121:
	{
		int32_t L_50 = V_3;
		Il2CppFullySharedGenericAny* L_51 = ___2_clientIds;
		il2cpp_codegen_memcpy(L_52, L_51, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		il2cpp_codegen_memcpy(V_2, L_52, SizeOf_TClientIdListType_t926FF842448673BAB6D5CFF50480F120F1D4F13C);
		int32_t L_54;
		L_54 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_53, (void*)(Il2CppFullySharedGenericAny*)V_2);
		if ((((int32_t)L_50) < ((int32_t)L_54)))
		{
			goto IL_0042;
		}
	}
	{
		NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D((&V_1), NativeHashSet_1_Dispose_mF00D42CE9F82C5713139BDD9F2665AB61F3A4D8D_RuntimeMethod_var);
		int32_t L_55 = V_0;
		return L_55;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mAFB12215C9F2EEAE909C5FA628533350988D9815_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mD6874D4C3CAF6713BF17BD5AFE52DAB1217750C5(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mEA0B1C2CA4DBF250F8ADEF1D6D979E76643B3971_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m7C2054212EB5131825DF6DF916A910EA65E629F3(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mD0C07DA170C5120D4FD019CFF401CED215CACAAA_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_mC9026A8281019EB14BDDC06FEBE9D28B231F6DBE(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_m929FC81DCDED8F61D87BDD675D3FF973F681252E_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m84C380E5EEE14781E2D387136DB3270762A7128F(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m3F324491879C6A8677828DBBAC072F30E55F4A59_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m9D44BB905DF9A46DAE329A2F4004228454C04698(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_m8233A3460E59E5B018862FD72F978BFDF1347170_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = NetworkMessageManager_SendMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_TisPointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_m74BCA3ECDE265CED4D1BE15C7A3D472A42983C19(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendMessage_TisIl2CppFullySharedGenericAny_m31E12E8A1890164B9E0716354BF9929618F739A3_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Il2CppFullySharedGenericAny* ___0_message, int32_t ___1_delivery, uint64_t* ___2_clientIds, int32_t ___3_numClientIds, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_message;
		int32_t L_1 = ___1_delivery;
		uint64_t* L_2 = ___2_clientIds;
		int32_t L_3 = ___3_numClientIds;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_4), L_2, L_3, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, Il2CppFullySharedGenericAny*, int32_t, PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisIl2CppFullySharedGenericAny_mD33E551829BF0B488C452A0185975E9136415C4D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, Il2CppFullySharedGenericAny* ___2_message, int32_t ___3_delivery, uint64_t ___4_clientId, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = 0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		Type_t* L_2 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		uint64_t L_6 = ___4_clientId;
		int32_t L_7;
		L_7 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_5, L_6, (bool)0, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		return 0;
	}

IL_0032:
	{
		uintptr_t L_9 = ((uintptr_t)8);
		int8_t* L_10 = (int8_t*) (L_9 ? alloca(L_9) : NULL);
		memset(L_10, 0, L_9);
		int8_t* L_11 = (L_10);
		uint64_t L_12 = ___4_clientId;
		*((int64_t*)L_11) = (int64_t)L_12;
		V_1 = (uint64_t*)L_11;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_13 = ___0_tmpSerializer;
		int32_t L_14 = ___1_maxSize;
		Il2CppFullySharedGenericAny* L_15 = ___2_message;
		int32_t L_16 = ___3_delivery;
		uint64_t* L_17 = V_1;
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_18;
		memset((&L_18), 0, sizeof(L_18));
		PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8((&L_18), L_17, 1, PointerListWrapper_1__ctor_m4883DEC4044E5F3D8D0E142772159B8028E26CA8_RuntimeMethod_var);
		PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6 L_19 = L_18;
		RuntimeObject* L_20 = Box(PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6_il2cpp_TypeInfo_var, &L_19);
		V_2 = (RuntimeObject*)L_20;
		int32_t L_21 = V_0;
		int32_t L_22;
		L_22 = ((  int32_t (*) (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, int32_t, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_13, L_14, L_15, L_16, (&V_2), L_21, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440_mAEE61DE5E0453455E4A67732DF3C4C0E4A9F80CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, AnticipationCounterSyncPingMessage_tE9C54BC0D4A4B72F5CEDB3D76A6B36CAE96D0440*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisAnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F_m372B20212C2BADA3F5D15515807418727D99645C_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, AnticipationCounterSyncPongMessage_t09E01EDA2B4C82FDCC2AB10BE4F14B14B4BE561F*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103_m6F0A023AE303B39E204690D1EEDB7711BF1A6735_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ChangeOwnershipMessage_tEF19BE4B1928201B9861E869DBF93424F8AFC103*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E_m9FA79875297ABB6040782E77971BC1AD1DCF445F_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ClientConnectedMessage_tADCD93468AB0DC7530616900F85D58E57EC3C46E*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5_mF65D5CDBDC865AF55CA8903891362256C293B185_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ClientDisconnectedMessage_t0C8722005B5EC57AF31E4400B5D754172EC06AF5*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793_mE24B8D94B592FCC251FED87386652FC34654D9CC_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ClientRpcMessage_t87E63B082294B32DCA108CF613AC130A54F35793*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58_m65FD8F88C74F1FC045038B775A653E8C5DC62D31_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ConnectionApprovedMessage_t250E9A4D6270086FBF6335EC55E336A6D6FFAA58*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876_m1500DAFBE1DCC1E3ED948CFF11CA78381D1C2209_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ConnectionRequestMessage_tB06FE3CD0016BEBC930EE84D68A99F55FD782876*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisCreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792_mD8C3847DB29396555A92F90D3306371AD2BBBE24_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, CreateObjectMessage_t9D7B225CE00565D52CC7BD9F6C23033CE8517792*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050_mABB159F7E1737E43073898980437442CC921C160_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, DestroyObjectMessage_tF945B3E9EF49602411CF9FBB19E2A7EA92F4E050*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisDisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4_m983F06712AC04C722EABB64CF4811464DE2FAF49_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, DisconnectReasonMessage_t9E24670899D700D426010C5987CA051C92E07BC4*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93_mA60EDAC27D1526C0969E989F201740BC01AD4358_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, NamedMessage_t9F7A03E65A493463A4DE58EC08A5572A08DBDE93*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70_m9B589F57B6E8537FB260E9A581B04AE7BB408D2D_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, NetworkTransformMessage_t1606BD095D0910D7C29D440EFFC8751C2493BE70*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisNetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A_m7B4A6F808C7A2A13E228C533C90900C141CFCD53_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, NetworkVariableDeltaMessage_t40B8A55EB37D727A801A7B527AE80510913DB41A*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD_mA74CD9CDD22EE5045510B5ABE41EDC18F9F0F2FF_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ParentSyncMessage_t48DA84CC941D4AF403632912F1F04052217102DD*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044_m0FEFB38D22C5925881EBE0225C18A91E4C81DDD8_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ProxyMessage_tF8FCA596585524136AA901CB4F80FB1EFBD09044*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisRpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15_m0657361B288EE14D27E3E5A57A00DC67192D1276_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, RpcMessage_t17348F9B6955A0235FF29AF289D7855D67AB0C15*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSceneEventMessage_tE156E8C393F2398028771693E05519F01B391601_mDED71166B6B2139D6EC1D2AD1996C1E5A6A1D1C6_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, SceneEventMessage_tE156E8C393F2398028771693E05519F01B391601*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D_mD8ADABF936398386A28AF99FF5BE7C23FFC32D7B_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ServerLogMessage_t45AF3BF04681628E36E6B5176B06EACA3543D52D*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB_mD063DA4E84CAC9D6689FD544387FD7A836387AE2_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, ServerRpcMessage_t95BF94F3ABD343A3C6166D36C81CCF42A3A4E3EB*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisSessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83_mEDF93DC3BC4BD40B1CACA7C62FFAF137FFA51565_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, SessionOwnerMessage_tF53561523EFAF1BC0726087C826B4B5627E89B83*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisTimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471_m73338D020AA641E16C72B701D38B8266A1E84F36_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, TimeSyncMessage_t9C58B7AFA7062DD6F727D4E9FFF71448C8630471*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisUnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977_mA7E027B0C3F98F3F2B9E19D29F805661FE521612_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, UnnamedMessage_t898AD6C7ED277D4C847E155D992D68ACFB256977*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_SendPreSerializedMessage_TisIl2CppFullySharedGenericAny_m0AE772800137A4D83160CEF00851EFA1DBB39358_gshared (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* ___0_tmpSerializer, int32_t ___1_maxSize, Il2CppFullySharedGenericAny* ___2_message, int32_t ___3_delivery, RuntimeObject** ___4_clientIds, int32_t ___5_messageVersionFilter, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D);
		il2cpp_rgctx_method_init(method);
	}
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965(FastBufferWriter_GetWriteSize_TisNetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673_mB6F27E16E99930F3403DE510BC44F224E2756965_RuntimeMethod_var);
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_0), L_0, (int32_t)2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_039f:
			{
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				il2cpp_codegen_initobj((&V_2), sizeof(NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673));
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_1 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_1);
				V_3 = L_2;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_3;
				L_3 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				(&V_2)->___MessageSize = (uint32_t)L_3;
				Dictionary_2_t4E1AC3103633DA3C82B1A7A6930ED5ECA825CC05* L_4 = __this->___m_MessageTypes;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_6;
				L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
				NullCheck(L_4);
				uint32_t L_7;
				L_7 = Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2(L_4, L_6, Dictionary_2_get_Item_m049101FC74A1975FDEA57CF7D1B0D5BA7B50A2D2_RuntimeMethod_var);
				(&V_2)->___MessageType = L_7;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_8 = V_2;
				V_1 = L_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_10 = V_1;
				uint32_t L_11 = L_10.___MessageType;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_9, L_11, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_12 = V_0;
				NetworkMessageHeader_tFFC66D680C8854B3110927656A5175C93575A673 L_13 = V_1;
				uint32_t L_14 = L_13.___MessageSize;
				BytePacker_WriteValueBitPacked_m50033FEA83560CA7AF9668B3C7352E013D518F11(L_12, L_14, NULL);
				V_4 = 0;
				goto IL_0376_1;
			}

IL_0069_1:
			{
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = __this->___m_DisconnectedClients;
				RuntimeObject** L_16 = ___4_clientIds;
				RuntimeObject* L_17 = *((RuntimeObject**)L_16);
				int32_t L_18 = V_4;
				NullCheck(L_17);
				uint64_t L_19;
				L_19 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_17, L_18);
				NullCheck(L_15);
				bool L_20;
				L_20 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_15, L_19, HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0370_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var);
				Type_t* L_23 = ((NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468_il2cpp_TypeInfo_var))->___s_ConnectionRequestType;
				bool L_24;
				L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_22, L_23, NULL);
				if (!L_24)
				{
					goto IL_00c7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				RuntimeObject** L_27 = ___4_clientIds;
				RuntimeObject* L_28 = *((RuntimeObject**)L_27);
				int32_t L_29 = V_4;
				NullCheck(L_28);
				uint64_t L_30;
				L_30 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_28, L_29);
				int32_t L_31;
				L_31 = NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline(__this, L_26, L_30, (bool)0, NULL);
				V_9 = L_31;
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_33 = V_9;
				int32_t L_34 = ___5_messageVersionFilter;
				if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
				{
					goto IL_0370_1;
				}
			}

IL_00c7_1:
			{
				RuntimeObject** L_35 = ___4_clientIds;
				RuntimeObject* L_36 = *((RuntimeObject**)L_35);
				int32_t L_37 = V_4;
				NullCheck(L_36);
				uint64_t L_38;
				L_38 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E_il2cpp_TypeInfo_var, L_36, L_37);
				V_5 = L_38;
				uint64_t L_39 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				int32_t L_42 = ___3_delivery;
				bool L_43;
				L_43 = NetworkMessageManager_CanSend_m53198ECCCFC9A51307BCD49E76BF53049D06B711(__this, L_39, L_41, L_42, NULL);
				if (!L_43)
				{
					goto IL_0370_1;
				}
			}
			{
				int32_t L_44 = __this->___NonFragmentedMessageMaxSize;
				V_6 = L_44;
				int32_t L_45 = ___3_delivery;
				if ((((int32_t)L_45) == ((int32_t)4)))
				{
					goto IL_014c_1;
				}
			}
			{
				Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_46 = __this->___PeerMTUSizes;
				uint64_t L_47 = V_5;
				NullCheck(L_46);
				bool L_48;
				L_48 = Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51(L_46, L_47, (&V_10), Dictionary_2_TryGetValue_m59A3EFB659F69BA6896A334B18E420F36BCBAE51_RuntimeMethod_var);
				if (!L_48)
				{
					goto IL_010e_1;
				}
			}
			{
				int32_t L_49 = V_10;
				___1_maxSize = L_49;
			}

IL_010e_1:
			{
				int32_t L_50 = ___1_maxSize;
				V_6 = L_50;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_51 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_52 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_51);
				V_3 = L_52;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_53;
				L_53 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline((&V_3), NULL);
				int32_t L_54 = ___1_maxSize;
				if ((((int32_t)L_53) < ((int32_t)L_54)))
				{
					goto IL_014c_1;
				}
			}
			{
				uint64_t L_55 = V_5;
				uint64_t L_56 = L_55;
				RuntimeObject* L_57 = Box(il2cpp_defaults.uint64_class, &L_56);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				NullCheck(L_59);
				String_t* L_60;
				L_60 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_59);
				String_t* L_61;
				L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2E91C32DDF49D7A1970FE11929760D0F7CF3A278, L_57, (RuntimeObject*)L_60, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_61, NULL);
				goto IL_0370_1;
			}

IL_014c_1:
			{
				V_11 = 0;
				goto IL_016e_1;
			}

IL_0151_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_62 = __this->___m_Hooks;
				int32_t L_63 = V_11;
				NullCheck(L_62);
				RuntimeObject* L_64;
				L_64 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_62, L_63, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_65 = V_5;
				Il2CppFullySharedGenericAny* L_66 = ___2_message;
				int32_t L_67 = ___3_delivery;
				NullCheck(L_64);
				GenericInterfaceActionInvoker3< uint64_t, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_64, L_65, L_66, L_67);
				int32_t L_68 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_016e_1:
			{
				int32_t L_69 = V_11;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_70 = __this->___m_Hooks;
				NullCheck(L_70);
				int32_t L_71;
				L_71 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_70, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_69) < ((int32_t)L_71)))
				{
					goto IL_0151_1;
				}
			}
			{
				Dictionary_2_tF94A082BC0A1596467346D509355D345EFF5FA68* L_72 = __this->___m_SendQueues;
				uint64_t L_73 = V_5;
				NullCheck(L_72);
				NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB L_74;
				L_74 = Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B(L_72, L_73, Dictionary_2_get_Item_mE16FCDF42A9E03B435AE822EB4014DEF0DA1C08B_RuntimeMethod_var);
				V_7 = L_74;
				int32_t L_75;
				L_75 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_01c8_1;
				}
			}
			{
				int32_t L_76 = ___3_delivery;
				int32_t L_77 = V_6;
				int32_t L_78 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_79;
				memset((&L_79), 0, sizeof(L_79));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_79), L_76, L_77, (int32_t)3, L_78, NULL);
				V_12 = L_79;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_80;
				L_80 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), 0, NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_81 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_80->___Writer);
				uint32_t L_82 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_81, (int32_t)L_82, NULL);
				goto IL_024c_1;
			}

IL_01c8_1:
			{
				int32_t L_83;
				L_83 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_84;
				L_84 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_83, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_13 = L_84;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_85 = V_13;
				int32_t L_86 = L_85->___NetworkDelivery;
				int32_t L_87 = ___3_delivery;
				if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
				{
					goto IL_0216_1;
				}
			}
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_88 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_89 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_88->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_90;
				L_90 = FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline(L_89, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_91 = V_13;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_92 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_91->___Writer);
				int32_t L_93;
				L_93 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_92, NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_94 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_95 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_94);
				V_3 = L_95;
				int32_t L_96;
				L_96 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_97;
				L_97 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_90, L_93))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_96, L_97)))))
				{
					goto IL_024c_1;
				}
			}

IL_0216_1:
			{
				int32_t L_98 = ___3_delivery;
				int32_t L_99 = V_6;
				int32_t L_100 = ___1_maxSize;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7 L_101;
				memset((&L_101), 0, sizeof(L_101));
				SendQueueItem__ctor_mC2BDC24F3964A0F484005683AB7316DC1272FD56((&L_101), L_98, L_99, (int32_t)3, L_100, NULL);
				V_12 = L_101;
				NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D((&V_7), (&V_12), NativeList_1_Add_m1C72AC3E69ABD8217C0D04F9921A1B47EDD2452D_RuntimeMethod_var);
				int32_t L_102;
				L_102 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_103;
				L_103 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_102, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_104 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_103->___Writer);
				uint32_t L_105 = sizeof(NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_104, (int32_t)L_105, NULL);
			}

IL_024c_1:
			{
				int32_t L_106;
				L_106 = NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_inline((&V_7), NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_RuntimeMethod_var);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_107;
				L_107 = NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344((&V_7), ((int32_t)il2cpp_codegen_subtract(L_106, 1)), NativeList_1_ElementAt_m4155BCEA9B1A22F02D64A2D0B8F564913E575344_RuntimeMethod_var);
				V_8 = L_107;
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_108 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_109 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_108->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_110 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_111 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_110);
				V_3 = L_111;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_112;
				L_112 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_113;
				L_113 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				bool L_114;
				L_114 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline(L_109, ((int32_t)il2cpp_codegen_add(L_112, L_113)), NULL);
				if (L_114)
				{
					goto IL_02d3_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_115 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_116 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_115);
				V_3 = L_116;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_117;
				L_117 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_118;
				L_118 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
				RuntimeObject* L_120 = Box(il2cpp_defaults.int32_class, &L_119);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_121 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_122 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_121->___Writer);
				int32_t L_123;
				L_123 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(L_122, NULL);
				int32_t L_124 = L_123;
				RuntimeObject* L_125 = Box(il2cpp_defaults.int32_class, &L_124);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_126 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_127 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_126->___Writer);
				int32_t L_128;
				L_128 = FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline(L_127, NULL);
				int32_t L_129 = L_128;
				RuntimeObject* L_130 = Box(il2cpp_defaults.int32_class, &L_129);
				String_t* L_131;
				L_131 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral968EEBAE113F59BCA89353695043527A8D8C668D, L_120, L_125, L_130, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_131, NULL);
				goto IL_0370_1;
			}

IL_02d3_1:
			{
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_132 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_133 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_132->___Writer);
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				uint8_t* L_134;
				L_134 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_0), NULL);
				int32_t L_135;
				L_135 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_133, L_134, L_135, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_136 = V_8;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_137 = (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)(&L_136->___Writer);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_138 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_139 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_138);
				V_3 = L_139;
				uint8_t* L_140;
				L_140 = FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline((&V_3), NULL);
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_141 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_142 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_141);
				V_3 = L_142;
				int32_t L_143;
				L_143 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline(L_137, L_140, L_143, 0, NULL);
				SendQueueItem_t028997B9499F98F8FBFDDCA6245A3CCE69A37CB7* L_144 = V_8;
				NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA* L_145 = (NetworkBatchHeader_t17FCE9C128DF7DF17874253A431A98B2DB19C6AA*)(&L_144->___BatchHeader);
				uint16_t* L_146 = (uint16_t*)(&L_145->___BatchCount);
				uint16_t* L_147 = L_146;
				int32_t L_148 = *((uint16_t*)L_147);
				*((int16_t*)L_147) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 1)));
				V_14 = 0;
				goto IL_0361_1;
			}

IL_032e_1:
			{
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_149 = __this->___m_Hooks;
				int32_t L_150 = V_14;
				NullCheck(L_149);
				RuntimeObject* L_151;
				L_151 = List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9(L_149, L_150, List_1_get_Item_m2AC52F6154CCC350A2D161D9271DC7A4141292F9_RuntimeMethod_var);
				uint64_t L_152 = V_5;
				Il2CppFullySharedGenericAny* L_153 = ___2_message;
				int32_t L_154 = ___3_delivery;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_155 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_156 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_155);
				V_3 = L_156;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_157;
				L_157 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_158;
				L_158 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				NullCheck(L_151);
				GenericInterfaceActionInvoker4< uint64_t, Il2CppFullySharedGenericAny*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_151, L_152, L_153, L_154, ((int32_t)il2cpp_codegen_add(L_157, L_158)));
				int32_t L_159 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_159, 1));
			}

IL_0361_1:
			{
				int32_t L_160 = V_14;
				List_1_tC1AC8A4D1ABE47FA75A90A3AB06B2FC6FACB9810* L_161 = __this->___m_Hooks;
				NullCheck(L_161);
				int32_t L_162;
				L_162 = List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_inline(L_161, List_1_get_Count_m1B5F03DAFC4DD93F2A6F3BF9CF99369C854107F4_RuntimeMethod_var);
				if ((((int32_t)L_160) < ((int32_t)L_162)))
				{
					goto IL_032e_1;
				}
			}

IL_0370_1:
			{
				int32_t L_163 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_0376_1:
			{
				int32_t L_164 = V_4;
				RuntimeObject** L_165 = ___4_clientIds;
				RuntimeObject* L_166 = *((RuntimeObject**)L_165);
				NullCheck((RuntimeObject*)L_166);
				int32_t L_167;
				L_167 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IReadOnlyCollection_1_t02F24BFA8317160B96EEE7839D43A61F5149E410_il2cpp_TypeInfo_var, (RuntimeObject*)L_166);
				if ((((int32_t)L_164) < ((int32_t)L_167)))
				{
					goto IL_0069_1;
				}
			}
			{
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_168 = ___0_tmpSerializer;
				FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_169 = (*(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)L_168);
				V_3 = L_169;
				il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
				int32_t L_170;
				L_170 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_3), NULL);
				int32_t L_171;
				L_171 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&V_0), NULL);
				V_15 = ((int32_t)il2cpp_codegen_add(L_170, L_171));
				goto IL_03ad;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ad:
	{
		int32_t L_172 = V_15;
		return L_172;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkMessageManager_GetMessageVersion_mDCA4F408418C719862CE92414D88B3B126DB980A_inline (NetworkMessageManager_t3AC5DCD467E3287780F83E2B4A37CC5DCB40C468* __this, Type_t* ___0_type, uint64_t ___1_clientId, bool ___2_forReceive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3EF4F6B2EC138E3A20BD7549CE6DE54B0608CD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m86D30D35D7D850E4F407BBA5D3FFD3E9CF98DFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A068FAA5FD857531028973A5A72E792BFEA1A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7021ABA1AFBD4E3E2F78826FAFDAFAEB69472D);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* V_0 = NULL;
	int32_t V_1 = 0;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_2 = NULL;
	{
		Dictionary_2_tF27160F3F05A0ECC97850502DD8A2BC6E3FB9041* L_0 = __this->___m_PerClientMessageVersions;
		uint64_t L_1 = ___1_clientId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m86D30D35D7D850E4F407BBA5D3FFD3E9CF98DFB5(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m86D30D35D7D850E4F407BBA5D3FFD3E9CF98DFB5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3;
		L_3 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		V_2 = L_3;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___LogLevel;
		if (L_7)
		{
			goto IL_0062;
		}
	}
	{
		bool L_8 = ___2_forReceive;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Type_t* L_9 = ___0_type;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_9);
		uint64_t L_11 = ___1_clientId;
		uint64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.uint64_class, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral3F7021ABA1AFBD4E3E2F78826FAFDAFAEB69472D, L_10, L_13, NULL);
		NetworkLog_LogWarning_m1A2073B527F4B95F216508B0E5A76DF71823D899(L_14, NULL);
		goto IL_0062;
	}

IL_0047:
	{
		Type_t* L_15 = ___0_type;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_15);
		uint64_t L_17 = ___1_clientId;
		uint64_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.uint64_class, &L_18);
		String_t* L_20;
		L_20 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral24A068FAA5FD857531028973A5A72E792BFEA1A4, L_16, L_19, NULL);
		NetworkLog_LogWarning_m1A2073B527F4B95F216508B0E5A76DF71823D899(L_20, NULL);
	}

IL_0062:
	{
		return (-1);
	}

IL_0064:
	{
		Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* L_21 = V_0;
		Type_t* L_22 = ___0_type;
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_TryGetValue_m3EF4F6B2EC138E3A20BD7549CE6DE54B0608CD4D(L_21, L_22, (&V_1), Dictionary_2_TryGetValue_m3EF4F6B2EC138E3A20BD7549CE6DE54B0608CD4D_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_0071;
		}
	}
	{
		return (-1);
	}

IL_0071:
	{
		int32_t L_24 = V_1;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length;
		return L_5;
	}

IL_0024:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_where, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_1 = __this->___Handle;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Capacity;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_2, NULL);
		___0_where = L_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = ___0_where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_9 = __this->___Handle;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Position;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_11 = __this->___Handle;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Position;
		NullCheck(L_11);
		L_11->___Length = L_13;
	}

IL_004f:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_14 = __this->___Handle;
		int32_t L_15 = ___0_where;
		NullCheck(L_14);
		L_14->___Position = L_15;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_MaxCapacity_m9AAC1191EA17DE81E30AD51CA9B1B6B51B75FB09_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxCapacity;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position;
		int32_t L_2 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position;
		int32_t L_7 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_14 = ___0_bytes;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		return (bool)0;
	}

IL_0059:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Capacity_mD964D1DBD191F782D6808ABB619A8BAD2B9B4B2D_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Capacity;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_m2403FBA11BD6F554625287D720B65B45A0F6DA6A_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytes_m1715C899E1CBB7C7B98605F0D6C210B7D046379F_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, uint8_t* ___0_value, int32_t ___1_size, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___BufferPointer;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position;
		uint8_t* L_4 = ___0_value;
		int32_t L_5 = ___2_offset;
		int32_t L_6 = ___1_size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_3)), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)), ((int64_t)L_6), NULL);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle;
		NullCheck(L_7);
		int32_t* L_8 = (int32_t*)(&L_7->___Position);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = ___1_size;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerListWrapper_1_get_Count_mE80E96A053A86C1E5B734071C68D3E7EF71518AA_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t PointerListWrapper_1_get_Item_m55C935D279630871429EB1714F98841DBCF49527_gshared_inline (PointerListWrapper_1_t26CC6DE077552DA0173A6DD8A4E0FC5C9E68FFA6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = __this->___m_Value;
		int32_t L_1 = ___0_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mCC4E58287182D133ADDB3D60C97A0494B70F01E3_gshared_inline (NativeList_1_tC29926B3C823A1626820FC87B385FFE47BA188DB* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mD299B87C8E2D3789AF4B8D9180100B48D949CB60_inline((UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mD299B87C8E2D3789AF4B8D9180100B48D949CB60_gshared_inline (UnsafeList_1_tE5BC32881F7561AD5CBF64BB8677113AA7559391* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
