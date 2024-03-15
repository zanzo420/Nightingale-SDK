#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x17C - 0xC8)
// BlueprintGeneratedClass BP_HarvestComponent.BP_HarvestComponent_C
class UBP_HarvestComponent_C : public UHarvestComponent
{
public:
	TArray<struct FTransform>                    ResourceNodesFound;                                // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                EligibleIDs;                                       // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, double>                          RecentIndexes;                                     // 0xE8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       MaxRecentDuration;                                 // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActorAndInstanceIds>          EligibleActorsAndInstances;                        // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UsingIIMSystem;                                    // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResourceAvailable;                                 // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E92[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ResourceLocation;                                  // 0x158(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNodeIIMBase_C*             ResourceNode;                                      // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ResourceIndex;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HarvestComponent_C* GetDefaultObj();

	void FindClosestHarvestableTree(class APawn* Pawn, bool* Success, struct FVector* Nearest_Location, class ABP_ResourceNodeIIMBase_C** Resource_Node, int32* Nearest_Index, double LCurrentDistance, const struct FVector& LCurrentLocation, int32 LCurrentResourceIndex, const struct FVector& SearchExtents, int32 LBestResourceIndex, class ABP_ResourceNodeIIMBase_C* LBestResourceNode, const struct FVector& LBestLocation, double LClosestDistance, class ABP_ResourceNode_IIM_C* LCurrentResourceNode, class APawn* LPawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TScriptInterface<class IBPI_ResourceNode_C> K2Node_DynamicCast_AsBPI_Resource_Node, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetGrantedResource_Success, const struct FItemData& CallFunc_GetGrantedResource_ResourceData, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FBox& CallFunc_MakeBox_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, const struct FVector& CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation, bool CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FActorAndInstanceIds& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Get_Eligible_Resource_Nodes(class APawn* Pawn, enum class E_ResourceFilters ResourceFilter, const struct FGameplayTag& IIMInstanceTag, const struct FVector& NodeDiscoveryOrigin, double MaxDistance, bool CheckPowerLevel, bool* Success, struct FVector* NearestLocation, class ABP_ResourceNodeIIMBase_C** ResourceNode, int32* NearestIndex, double CallFunc_Square_ReturnValue, bool CallFunc_GetClosestResourceNodeTransform_Success, const struct FVector& CallFunc_GetClosestResourceNodeTransform_NearestLocation, class ABP_ResourceNodeIIMBase_C* CallFunc_GetClosestResourceNodeTransform_ResourceNode, int32 CallFunc_GetClosestResourceNodeTransform_NearestIndex, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Vector_DistanceSquared_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Square_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void GetResourceNodeLocation(class ABP_ResourceNodeIIMBase_C* ResourceNode, int32 ResourceIndex, bool* Success, struct FVector* Location, bool CallFunc_IsValid_ReturnValue, class UInstancedResourceNodeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_HasAuthority_ReturnValue);
	void ProcessSurroundingResourceNodeTransforms(TArray<struct FHitResult>& HitResults, class UNWXHierarchicalISMComponent* FoundMesh, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Length_ReturnValue_1, class UNWXHierarchicalISMComponent* K2Node_DynamicCast_AsNWXHierarchical_ISMComponent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetClosestResourceNodeTransform(class APawn* Pawn, bool FlagAsRecent, enum class E_ResourceFilters Filter, const struct FGameplayTag& IIMInstanceTag, bool CheckPowerLevel, bool* Success, struct FVector* NearestLocation, class ABP_ResourceNodeIIMBase_C** ResourceNode, int32* NearestIndex, const TArray<int32>& Instances, class ABP_ResourceNodeIIMBase_C* BestResourceNode, class ABP_ResourceNodeIIMBase_C* CurrentResourceNode, const struct FVector& CurrentLocation, bool LFlag, int32 BestIndex, int32 CurrentIndex, class APawn* LPawn, bool FoundResource, const struct FVector& BestLocation, double MinDistance, double CurrentDistance, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_DistanceSquared_ReturnValue, TArray<enum class EIIMGameplayState>& K2Node_MakeArray_Array, const struct FActorAndInstanceIds& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetNearestInstanceToPawn_FoundInstance, const struct FVector& CallFunc_GetNearestInstanceToPawn_Location, int32 CallFunc_GetNearestInstanceToPawn_InstanceID, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSurroundingResourceNodeTransformsBySphere(double SphereRadius, const struct FVector& SphereOrigin, const struct FVector& LOrigin, double LRadius, class UNWXHierarchicalISMComponent* FoundMesh, double CallFunc_GetGameTimeInSeconds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, TArray<struct FActorAndInstanceIds>& CallFunc_GetGameplayActorsAndInstancesInRadiusXY_OutActorsAndInstances, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_VariableSet_LastSearchTime_ImplicitCast, float CallFunc_SphereTraceMulti_Radius_ImplicitCast, float CallFunc_GetGameplayActorsAndInstancesInRadiusXY_Radius_ImplicitCast);
};

}


