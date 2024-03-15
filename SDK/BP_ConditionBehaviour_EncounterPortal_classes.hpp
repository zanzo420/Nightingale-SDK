#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x90 - 0x70)
// BlueprintGeneratedClass BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C
class UBP_ConditionBehaviour_EncounterPortal_C : public UConditionBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Watched_Actor;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class ETemporalPortalState              PortalState;                                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      Encounter_Config;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_EncounterPortal_C* GetDefaultObj();

	void OnPortalStateChanged(enum class ETemporalPortalState State, class ADeploymentPortal* DeploymentPortal, const struct FConditionPersistentData& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FConditionPersistentData& Temp_struct_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void GetWatchedActor(class ADeploymentPortal* DeploymentPortal, const TArray<class AActor*>& Targets, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Portal* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Portal, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1);
	void Initialize(class UObject* ContextObject, class AActor* Temp_object_Variable, bool CallFunc_DoesImplementInterface_ReturnValue, class AEncounterConfig* K2Node_DynamicCast_AsEncounter_Config, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTargetActor_ReturnValue);
	void SetContextObject(class UObject* ContextObject);
	void SetupCondition();
	void ExecuteUbergraph_BP_ConditionBehaviour_EncounterPortal(int32 EntryPoint, class UObject* K2Node_Event_ContextObject);
};

}


