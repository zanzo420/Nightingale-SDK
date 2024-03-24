#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xD8 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C
class UBP_ConditionBehaviour_Item_Acquired_Constraint_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FItemConstraint                       ItemConstraint;                                    // 0x88(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	class UInventoryComponentBase*               InventoryComponent;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInventoryComponentReady;                         // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A57B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentCount;                                      // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Item_Acquired_Constraint_C* GetDefaultObj();

	void GetAllInventoryEntries(TArray<struct FInventoryEntry>* AllInventoryEntries, const TArray<struct FInventoryEntry>& InventoryEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TScriptInterface<class IItemContainer>>& CallFunc_GetInventoryContainers_Containers, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries);
	void UnbindContainerEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TScriptInterface<class IItemContainer>>& CallFunc_GetInventoryContainers_Containers, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnInventoryReadyBindContainerEvents(bool Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<TScriptInterface<class IItemContainer>>& CallFunc_GetInventoryContainers_Containers, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnInventoryReadyCheckCompletion(bool bSuccess, int32 NewCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllInventoryEntries_AllInventoryEntries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue);
	void GetInventoryContainers(TArray<TScriptInterface<class IItemContainer>>* Containers, const TArray<TScriptInterface<class IItemContainer>>& ContainersToReturn, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void OnItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, int32 CallFunc_Max_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Clamp_ReturnValue);
	void OnItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess);
	void GetDebugText(class FText* Description, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void SetupCondition();
	void CompleteIfSatisfiedOnSetup();
	void OnConditionRemoved();
	void ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint(int32 EntryPoint, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput_1, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle_1);
};

}


