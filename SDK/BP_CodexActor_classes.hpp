#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x301 - 0x2D0)
// BlueprintGeneratedClass BP_CodexActor.BP_CodexActor_C
class ABP_CodexActor_C : public ACodexActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_HopeEchoAudioComponent_C*          BP_HopeEchoAudioComponent;                         // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_UI_LootShimmer;                                 // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCodexTrackerComponent*                CodexTrackerComponent;                             // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasBeenGranted;                                   // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CodexActor_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_Not_PreBool_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, TScriptInterface<class ICodexTrackerInterface> CallFunc_CanGrantCodex_self_CastInput, bool CallFunc_CanGrantCodex_ReturnValue);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, bool CallFunc_ShouldShowHopeEcho_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class FText Interactable_StringTableText, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void EvaluateCodexGrantedOrUpdated(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput_1, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnClientReady(bool Success, class APlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, bool CallFunc_IsValid_Guid_ReturnValue);
	void InitializeCodexAfterInstanceIDReplication(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexComponentInterface> CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput);
	void DeinitializeCodexTrackerBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexTrackerInterface> CallFunc_UnbindEventFrom_OnCodexUpdated_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_UnbindEventFrom_OnCodexGranted_self_CastInput);
	void RemoveBindings(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexComponentInterface> CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput);
	void InitializeCodexTrackerBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexUpdated_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexGranted_self_CastInput);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void InitializeHopeEcho(bool CallFunc_CheckCodexVisibility_bShouldBeVisible);
	void CheckCodexVisibility(bool* bShouldBeVisible, bool CallFunc_ShouldShowHopeEcho_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, TScriptInterface<class ICodexTrackerInterface> CallFunc_CanGrantCodex_self_CastInput, bool CallFunc_CanGrantCodex_ReturnValue);
	void ShowEchoOnClient();
	void HideEchoOnClient(bool CallFunc_IsVisible_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned);
	void UpdateCodexVisibility(bool CallFunc_IsActive_ReturnValue, bool CallFunc_CheckCodexVisibility_bShouldBeVisible);
	void PerformClientSideInteraction(class AController* Controller);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_CodexActor(int32 EntryPoint, class AController* K2Node_Event_Controller, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, bool CallFunc_HasAuthority_ReturnValue_1, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput);
};

}


