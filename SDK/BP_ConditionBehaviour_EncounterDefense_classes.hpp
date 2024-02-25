#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x88 - 0x70)
// BlueprintGeneratedClass BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C
class UBP_ConditionBehaviour_EncounterDefense_C : public UConditionBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               EncounterManager;                                  // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXStructure*                         Structure;                                         // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_EncounterDefense_C* GetDefaultObj();

	void CheckCompletion(class UPortalControllerComponent* PortalController, const TArray<class AActor*>& Targets, const struct FConditionPersistentData& Temp_struct_Variable, const struct FConditionPersistentData& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Initialize(class UObject* ContextObject, class AActor* Target_POI, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTargetActor_ReturnValue, class AActor* Temp_object_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class ABP_StructurePartProxy_C* K2Node_DynamicCast_AsBP_Structure_Part_Proxy, bool K2Node_DynamicCast_bSuccess_3, class ANWXStructure* CallFunc_GetStructure_Structure);
	void SetContextObject(class UObject* ContextObject);
	void SetupCondition();
	void ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense(int32 EntryPoint, class UObject* K2Node_Event_ContextObject);
};

}


