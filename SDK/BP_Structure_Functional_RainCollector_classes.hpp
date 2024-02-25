#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA38 - 0xA28)
// BlueprintGeneratedClass BP_Structure_Functional_RainCollector.BP_Structure_Functional_RainCollector_C
class ABP_Structure_Functional_RainCollector_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStructureResourceCollectionComponent* StructureWaterCollection;                          // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_RainCollector_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void WeatherStateChanged(int32 WeatherState);
	void ExecuteUbergraph_BP_Structure_Functional_RainCollector(int32 EntryPoint, class UStructureWeatherComponent* CallFunc_GetStructureWeatherComponent_ReturnValue, bool CallFunc_HasWeatheredState_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue, class UStructureWeatherComponent* CallFunc_GetStructureWeatherComponentForModify_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_WeatherState, class UStructureWeatherComponent* CallFunc_GetStructureWeatherComponentForModify_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


