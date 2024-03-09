#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x488 - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C
class ABP_Encounter_ArchetypeReachpoint_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Point_Acceptance_Range;                            // 0x450(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Point_Reached;                                     // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7067[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VFXActorHeightOffset;                              // 0x45C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VFXDelayDestroyTimer;                              // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Encounter_Reachpoint_AVFX_Actor_C* Reachpoint_AVFX_Actor;                             // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ReachPointLocation;                                // 0x470(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypeReachpoint_C* GetDefaultObj();

	void CollectDebuggerShapes(TArray<struct FEncounterDebugLine>* OutDebugLines, TArray<struct FEncounterDebugPoint>* OutDebugPoints, const TArray<struct FEncounterDebugPoint>& DebugPoints, const TArray<struct FEncounterDebugLine>& DebugLines, const struct FEncounterDebugPoint& K2Node_MakeStruct_EncounterDebugPoint, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FEncounterDebugLine>& CallFunc_CollectDebuggerShapes_OutDebugLines, TArray<struct FEncounterDebugPoint>& CallFunc_CollectDebuggerShapes_OutDebugPoints, float K2Node_MakeStruct_Radius_ImplicitCast);
	void GetReachPointLocation(struct FVector* ReachPointLocation);
	void SpawnRewardPylonAtRandomReachPoint(TArray<class ATargetPoint*>& ReachPoints, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C** SpawnedRewardPylon, const struct FStructureAssetReference& Reward_Pylon_SDA, class ATargetPoint* RandomReachPoint, bool CallFunc_Array_IsNotEmpty_ReturnValue, class ATargetPoint* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, const struct FStructureEncounterSpawnContext& K2Node_MakeStruct_StructureEncounterSpawnContext, class UObject* CallFunc_SpawnEncounterStructure_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container, bool K2Node_DynamicCast_bSuccess);
	void CheckReachPointsForExistingRewardPylon(TArray<class ATargetPoint*>& ReachPoints, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C** FoundRewardPylon, class ATargetPoint* CurrentRewardPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ATargetPoint* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container, bool K2Node_DynamicCast_bSuccess);
	void SpawnAndInitializeVFXActor(const struct FVector& Extent, const struct FVector& Origin, const struct FGameplayTag& AVFXActorAffinityTableRow, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_AddZHeightToPlacementTransform_ReturnValue, const struct FGameplayTag& CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Encounter_Reachpoint_AVFX_Actor_C* CallFunc_FinishSpawningActor_ReturnValue);
	void GetVFXActorHeightOffset(double* VFXActorHeightOffset, double K2Node_FunctionResult_VFXActorHeightOffset_ImplicitCast);
	void Initialize(bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SpawnRewardStructure(class ATargetPoint* RandomReachPoint, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* Reward_Pylon, const TArray<class ATargetPoint*>& Reach_Points, class UEncounterDataAsset* CallFunc_GetEncounterData_ReturnValue, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* CallFunc_CheckReachPointsForExistingRewardPylon_FoundRewardPylon, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Reachpoint* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Reachpoint, bool K2Node_DynamicCast_bSuccess_1, class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* CallFunc_SpawnRewardPylonAtRandomReachPoint_SpawnedRewardPylon, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	class FString CollectDebuggerInformation(const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void RefreshEncounter(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAnyPlayerInRadius_ReturnValue, float CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast);
	void BeginEncounter();
	void ReceiveDestroyed();
	void CompleteReachPointEncounter();
	void ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


