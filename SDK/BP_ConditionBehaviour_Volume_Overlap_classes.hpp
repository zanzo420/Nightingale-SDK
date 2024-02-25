#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x89 - 0x70)
// BlueprintGeneratedClass BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C
class UBP_ConditionBehaviour_Volume_Overlap_C : public UConditionBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               EncounterManager;                                  // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Cached_POI;                                        // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRegisteredTargetAddedBound;                      // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Volume_Overlap_C* GetDefaultObj();

	void BindToRegisteredTargetAdded(bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnActivationVolumeOverlap(const struct FConditionPersistentData& Temp_struct_Variable, const struct FConditionPersistentData& Temp_struct_Variable_1);
	void GetWatchedActor(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IEncounterMarkupDataInterface_ActivationVolumeProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Activation_Volume_Provider, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class AActivationVolume*>& CallFunc_GetActivationVolumes_ReturnValue, class AActivationVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Initialize(class UObject* ContextObject, class UObject* Temp_object_Variable, bool CallFunc_DoesImplementInterface_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IConditionPOIListenerInterface> K2Node_DynamicCast_AsCondition_POIListener_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetEncounterManager_Manager, bool CallFunc_GetEncounterManager_ReturnValue, class AActor* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTargetActor_ReturnValue);
	void SetContextObject(class UObject* ContextObject);
	void ExecuteUbergraph_BP_ConditionBehaviour_Volume_Overlap(int32 EntryPoint, class UObject* K2Node_Event_ContextObject);
};

}


