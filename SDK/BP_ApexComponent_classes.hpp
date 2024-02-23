#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x188 - 0xA0)
// BlueprintGeneratedClass BP_ApexComponent.BP_ApexComponent_C
class UBP_ApexComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_CreatureBase_C*                    ApexCreature;                                      // 0xA8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       HealthRatio;                                       // 0xB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class ULiveServicesDataTable*                PhaseMap;                                          // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentPhase;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PreviousPhase;                                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CompletedPhases;                                   // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EnablePhases;                                      // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         EnablePhaseDebug;                                  // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8DED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UClass*>                          CurrentAddedPhaseActionsSet;                       // 0xE8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class UClass*>                          CurrentRemovedPhaseActionsSet;                     // 0x138(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)

	static class UClass* StaticClass();
	static class UBP_ApexComponent_C* GetDefaultObj();

	void CheckGrantedActions(TSet<class UClass*> RemovePhaseActions, bool* Passed, class FString* FailingActionName, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetAIActions_self_CastInput, TArray<TSoftClassPtr<class UAIAction>>& CallFunc_GetAIActions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftClassPtr<class UAIAction> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsAIAction, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Set_Contains_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue);
	void DebugPrintCurrentPhase(const class FString& LRemoveActions, const class FString& LAddActions, const class FString& LHeader, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UClass*>& CallFunc_Set_ToArray_Result, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result_1, class UClass* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ApexLog(const class FString& LogMessage, enum class ENWXLogLevel LogLevel, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void GetCurrentPhaseActions(TArray<class UClass*>* CurrentPhaseActions, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetCompletedPhases(TArray<class FName>* CompletedPhases, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetPreviousPhase(bool* PhaseFound, class FName* PhaseName, int32* PhaseIdx, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetCurrentPhase(bool* PhaseFound, class FName* PhaseName, int32* PhaseIdx, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void RevertCurrentPhaseActions(const TArray<class UClass*>& LCurrentRemovedPhaseActions, const TArray<class UClass*>& LCurrentAddedPhaseActions, TArray<class UClass*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ApplyAIActions_Success, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<class UClass*>& CallFunc_Set_ToArray_Result_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RemoveAIActions_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ValidatePhaseData(bool* DataValid, double PreviousStageHealth, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CreaturePhaseMap& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_VariableSet_PreviousStageHealth_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_PreviousStageHealth_ImplicitCast_1);
	void CheckPhase(double NormalizedHealth, bool IsInitialCheck, const TArray<class UClass*>& LNewRemoveAIAs, const TArray<class UClass*>& LNewAddAIAs, const TArray<class UClass*>& LCleanupRemoveAIAs, const TArray<class UClass*>& LCleanupAddAIAs, double LNextPhaseNormalizaedHealth, TSet<class UClass*> LNextPhaseRemoveAIAs, TSet<class UClass*> LNextPhaseAddAIAs, TSet<class UClass*> CallFunc_Set_Difference_Result, TArray<class UClass*>& CallFunc_Set_ToArray_Result, TSet<class UClass*> CallFunc_Set_Difference_Result_1, TArray<class UClass*>& CallFunc_Set_ToArray_Result_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TSet<class UClass*> CallFunc_Set_Difference_Result_2, TArray<class UClass*>& CallFunc_Set_ToArray_Result_2, TSet<class UClass*> CallFunc_Set_Difference_Result_3, TArray<class UClass*>& CallFunc_Set_ToArray_Result_3, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_RemoveAIActions_ReturnValue, bool CallFunc_ApplyAIActions_Success, bool CallFunc_RemoveAIActions_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_ApplyAIActions_Success_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_CreaturePhaseMap& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double K2Node_VariableSet_LNextPhaseNormalizaedHealth_ImplicitCast);
	void Initialize(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
	void UpdateHealthBar(const class FString& Bar_Label, class ABP_PlayerController_C* PlayerController, const class FString& Bar_Label, class ABP_PlayerController_C* PlayerController, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ANWXCommonHUD* CallFunc_GetNWXCommonHUD_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager_3, bool K2Node_DynamicCast_bSuccess_3, class ANWXCommonHUD* CallFunc_GetNWXCommonHUD_ReturnValue_1, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager_4, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_InRange_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FS_CreatureInfo& CallFunc_GetCreatureInfo_Info, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void CacheHealthPercentage(class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetHealthPercentage_bSuccess, double CallFunc_GetHealthPercentage_HealthPercentage);
	void OnRep_HealthRatio();
	void OnLoaded_9E8035B645E6B611CB947ABF71A63832(class UObject* Loaded);
	void ApexDamaged(class ABP_CreatureBase_C* Creature);
	void LatentPhaseInit(class ABP_CreatureBase_C* Creature);
	void PhaseInitialization(class AAIController* Controller);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ApexComponent(int32 EntryPoint, class ABP_CreatureBase_C* K2Node_CustomEvent_Creature_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class ULiveServicesDataTable* K2Node_DynamicCast_AsLive_Services_Data_Table, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ValidatePhaseData_DataValid, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AAIController* CallFunc_GetAIController_ReturnValue, class ABP_CreatureBase_C* K2Node_CustomEvent_Creature, class AAIController* CallFunc_GetAIController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AAIController* K2Node_CustomEvent_Controller, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetPhaseMap_self_CastInput, TSoftObjectPtr<class ULiveServicesDataTable> CallFunc_GetPhaseMap_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsComponentTickEnabled_ReturnValue);
};

}

