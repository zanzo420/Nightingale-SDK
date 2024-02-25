#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x90 - 0x70)
// BlueprintGeneratedClass BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C
class UBP_ConditionBehaviour_EncounterStructureInteract_C : public UConditionBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ANWXStructurePartProxyActor*>   Critical_Structures;                               // 0x78(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          Retry;                                             // 0x88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_EncounterStructureInteract_C* GetDefaultObj();

	void BindInteract(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Structure_EncounterTrigger_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnInteract(class ABP_Structure_EncounterTrigger_C* Triggering_Structure, const struct FConditionPersistentData& Temp_struct_Variable, const struct FConditionPersistentData& Temp_struct_Variable_1);
	void OnResetHandler(const struct FConditionPersistentData& Temp_struct_Variable);
	void Initialize(class UObject* ContextObject, class AActor* Temp_object_Variable, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetTargetActor_ReturnValue);
	void SetContextObject(class UObject* ContextObject);
	void SetupCondition();
	void ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract(int32 EntryPoint, class UObject* K2Node_Event_ContextObject);
};

}


