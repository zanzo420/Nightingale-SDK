#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CodexActor.BP_CodexActor_C
// (Actor)

class UClass* ABP_CodexActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CodexActor_C");

	return Clss;
}


// BP_CodexActor_C BP_CodexActor.Default__BP_CodexActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CodexActor_C* ABP_CodexActor_C::GetDefaultObj()
{
	static class ABP_CodexActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CodexActor_C*>(ABP_CodexActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CodexActor.BP_CodexActor_C.CanQueryInteractable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Query                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::CanQueryInteractable(bool* Can_Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "CanQueryInteractable");

	Params::ABP_CodexActor_C_CanQueryInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Query != nullptr)
		*Can_Query = Parms.Can_Query;

}


// Function BP_CodexActor.BP_CodexActor_C.HoldInteractionAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::HoldInteractionAvailable(bool* bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "HoldInteractionAvailable");

	Params::ABP_CodexActor_C_HoldInteractionAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function BP_CodexActor.BP_CodexActor_C.IsInteractionDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               bIsDisabled                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisabledText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_CodexActor_C::IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "IsInteractionDisabled");

	Params::ABP_CodexActor_C_IsInteractionDisabled_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDisabled != nullptr)
		*bIsDisabled = Parms.bIsDisabled;

	if (DisabledText != nullptr)
		*DisabledText = std::move(Parms.DisabledText);

}


// Function BP_CodexActor.BP_CodexActor_C.DoesHaveResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HitId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           DesiredResourceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasResourceType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "DoesHaveResourceType");

	Params::ABP_CodexActor_C_DoesHaveResourceType_Params Parms{};

	Parms.HitId = HitId;
	Parms.DesiredResourceType = DesiredResourceType;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasResourceType != nullptr)
		*bHasResourceType = Parms.bHasResourceType;

}


// Function BP_CodexActor.BP_CodexActor_C.IsHarvestable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInteractionData            Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               IsHarvestable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "IsHarvestable");

	Params::ABP_CodexActor_C_IsHarvestable_Params Parms{};

	Parms.Interaction = Interaction;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHarvestable != nullptr)
		*IsHarvestable = Parms.IsHarvestable;

}


// Function BP_CodexActor.BP_CodexActor_C.GetInteractIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)

void ABP_CodexActor_C::GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "GetInteractIcon");

	Params::ABP_CodexActor_C_GetInteractIcon_Params Parms{};

	Parms.InteractionData = InteractionData;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_CodexActor.BP_CodexActor_C.CanInteractWithActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexAssetReference_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexAssetReference        CallFunc_GetCodexAssetReference_ReturnValue                      (ConstParm, NoDestructor)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexComponentID_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexComponentID_OutID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_CanGrantCodex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanGrantCodex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_Not_PreBool_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, TScriptInterface<class ICodexTrackerInterface> CallFunc_CanGrantCodex_self_CastInput, bool CallFunc_CanGrantCodex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "CanInteractWithActor");

	Params::ABP_CodexActor_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCodexAssetReference_self_CastInput = CallFunc_GetCodexAssetReference_self_CastInput;
	Parms.CallFunc_GetCodexAssetReference_ReturnValue = CallFunc_GetCodexAssetReference_ReturnValue;
	Parms.CallFunc_GetCodexComponentID_self_CastInput = CallFunc_GetCodexComponentID_self_CastInput;
	Parms.CallFunc_GetCodexComponentID_OutID = CallFunc_GetCodexComponentID_OutID;
	Parms.CallFunc_CanGrantCodex_self_CastInput = CallFunc_CanGrantCodex_self_CastInput;
	Parms.CallFunc_CanGrantCodex_ReturnValue = CallFunc_CanGrantCodex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_CodexActor.BP_CodexActor_C.ReturnMeshToHighlight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>StaticMesh_to_Highlight                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>SkeletalMesh_to_Highlight                                        (Parm, OutParm, ContainsInstancedReference)
// bool                               Hostile_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Quality                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowHopeEcho_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void ABP_CodexActor_C::ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, bool CallFunc_ShouldShowHopeEcho_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "ReturnMeshToHighlight");

	Params::ABP_CodexActor_C_ReturnMeshToHighlight_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.CallFunc_ShouldShowHopeEcho_ReturnValue = CallFunc_ShouldShowHopeEcho_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh_to_Highlight != nullptr)
		*StaticMesh_to_Highlight = std::move(Parms.StaticMesh_to_Highlight);

	if (SkeletalMesh_to_Highlight != nullptr)
		*SkeletalMesh_to_Highlight = std::move(Parms.SkeletalMesh_to_Highlight);

	if (Hostile_ != nullptr)
		*Hostile_ = Parms.Hostile_;

	if (Quality != nullptr)
		*Quality = Parms.Quality;

}


// Function BP_CodexActor.BP_CodexActor_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::InteractPressed(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "InteractPressed");

	Params::ABP_CodexActor_C_InteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_CodexActor.BP_CodexActor_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::InteractReleased(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "InteractReleased");

	Params::ABP_CodexActor_C_InteractReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_CodexActor.BP_CodexActor_C.InteractionRequiresClientOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               RequiresClientAction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "InteractionRequiresClientOnly");

	Params::ABP_CodexActor_C_InteractionRequiresClientOnly_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (RequiresClientAction != nullptr)
		*RequiresClientAction = Parms.RequiresClientAction;

}


// Function BP_CodexActor.BP_CodexActor_C.GetInteractText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class FString                      InteractText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Interactable_StringTableText                                     (Edit, BlueprintVisible)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_CodexActor_C::GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class FText Interactable_StringTableText, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "GetInteractText");

	Params::ABP_CodexActor_C_GetInteractText_Params Parms{};

	Parms.InteractionData = InteractionData;
	Parms.Interactable_StringTableText = Interactable_StringTableText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = std::move(Parms.InteractText);

}


// Function BP_CodexActor.BP_CodexActor_C.EvaluateCodexGrantedOrUpdated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCodexEntry                 CodexEntry                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                SubentryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexAssetReference_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexAssetReference        CallFunc_GetCodexAssetReference_ReturnValue                      (ConstParm, NoDestructor)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexAssetReference_self_CastInput_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexAssetReference        CallFunc_GetCodexAssetReference_ReturnValue_1                    (ConstParm, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::EvaluateCodexGrantedOrUpdated(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput_1, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "EvaluateCodexGrantedOrUpdated");

	Params::ABP_CodexActor_C_EvaluateCodexGrantedOrUpdated_Params Parms{};

	Parms.CodexEntry = CodexEntry;
	Parms.SubentryTag = SubentryTag;
	Parms.CallFunc_GetCodexAssetReference_self_CastInput = CallFunc_GetCodexAssetReference_self_CastInput;
	Parms.CallFunc_GetCodexAssetReference_ReturnValue = CallFunc_GetCodexAssetReference_ReturnValue;
	Parms.CallFunc_GetCodexAssetReference_self_CastInput_1 = CallFunc_GetCodexAssetReference_self_CastInput_1;
	Parms.CallFunc_GetCodexAssetReference_ReturnValue_1 = CallFunc_GetCodexAssetReference_ReturnValue_1;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.OnClientReady
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexComponentID_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexComponentID_OutID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::OnClientReady(bool Success, class APlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, bool CallFunc_IsValid_Guid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "OnClientReady");

	Params::ABP_CodexActor_C_OnClientReady_Params Parms{};

	Parms.Success = Success;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetCodexComponentID_self_CastInput = CallFunc_GetCodexComponentID_self_CastInput;
	Parms.CallFunc_GetCodexComponentID_OutID = CallFunc_GetCodexComponentID_OutID;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.InitializeCodexAfterInstanceIDReplication
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::InitializeCodexAfterInstanceIDReplication(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexComponentInterface> CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "InitializeCodexAfterInstanceIDReplication");

	Params::ABP_CodexActor_C_InitializeCodexAfterInstanceIDReplication_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput = CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.DeinitializeCodexTrackerBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_UnbindEventFrom_OnCodexUpdated_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_UnbindEventFrom_OnCodexGranted_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::DeinitializeCodexTrackerBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexTrackerInterface> CallFunc_UnbindEventFrom_OnCodexUpdated_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_UnbindEventFrom_OnCodexGranted_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "DeinitializeCodexTrackerBindings");

	Params::ABP_CodexActor_C_DeinitializeCodexTrackerBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_UnbindEventFrom_OnCodexUpdated_self_CastInput = CallFunc_UnbindEventFrom_OnCodexUpdated_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_UnbindEventFrom_OnCodexGranted_self_CastInput = CallFunc_UnbindEventFrom_OnCodexGranted_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::RemoveBindings(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexComponentInterface> CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "RemoveBindings");

	Params::ABP_CodexActor_C_RemoveBindings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput = CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.InitializeCodexTrackerBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_BindEventTo_OnCodexUpdated_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_BindEventTo_OnCodexGranted_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::InitializeCodexTrackerBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexUpdated_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexGranted_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "InitializeCodexTrackerBindings");

	Params::ABP_CodexActor_C_InitializeCodexTrackerBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BindEventTo_OnCodexUpdated_self_CastInput = CallFunc_BindEventTo_OnCodexUpdated_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BindEventTo_OnCodexGranted_self_CastInput = CallFunc_BindEventTo_OnCodexGranted_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexComponentID_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexComponentID_OutID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "SetupBindings");

	Params::ABP_CodexActor_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCodexComponentID_self_CastInput = CallFunc_GetCodexComponentID_self_CastInput;
	Parms.CallFunc_GetCodexComponentID_OutID = CallFunc_GetCodexComponentID_OutID;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.InitializeHopeEcho
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckCodexVisibility_bShouldBeVisible                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::InitializeHopeEcho(bool CallFunc_CheckCodexVisibility_bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "InitializeHopeEcho");

	Params::ABP_CodexActor_C_InitializeHopeEcho_Params Parms{};

	Parms.CallFunc_CheckCodexVisibility_bShouldBeVisible = CallFunc_CheckCodexVisibility_bShouldBeVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.CheckCodexVisibility
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldBeVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowHopeEcho_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexAssetReference_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexAssetReference        CallFunc_GetCodexAssetReference_ReturnValue                      (ConstParm, NoDestructor)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexComponentID_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexComponentID_OutID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_CanGrantCodex_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanGrantCodex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::CheckCodexVisibility(bool* bShouldBeVisible, bool CallFunc_ShouldShowHopeEcho_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, TScriptInterface<class ICodexTrackerInterface> CallFunc_CanGrantCodex_self_CastInput, bool CallFunc_CanGrantCodex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "CheckCodexVisibility");

	Params::ABP_CodexActor_C_CheckCodexVisibility_Params Parms{};

	Parms.CallFunc_ShouldShowHopeEcho_ReturnValue = CallFunc_ShouldShowHopeEcho_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCodexAssetReference_self_CastInput = CallFunc_GetCodexAssetReference_self_CastInput;
	Parms.CallFunc_GetCodexAssetReference_ReturnValue = CallFunc_GetCodexAssetReference_ReturnValue;
	Parms.CallFunc_GetCodexComponentID_self_CastInput = CallFunc_GetCodexComponentID_self_CastInput;
	Parms.CallFunc_GetCodexComponentID_OutID = CallFunc_GetCodexComponentID_OutID;
	Parms.CallFunc_CanGrantCodex_self_CastInput = CallFunc_CanGrantCodex_self_CastInput;
	Parms.CallFunc_CanGrantCodex_ReturnValue = CallFunc_CanGrantCodex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldBeVisible != nullptr)
		*bShouldBeVisible = Parms.bShouldBeVisible;

}


// Function BP_CodexActor.BP_CodexActor_C.ShowEchoOnClient
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CodexActor_C::ShowEchoOnClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "ShowEchoOnClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodexActor.BP_CodexActor_C.HideEchoOnClient
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnSystem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::HideEchoOnClient(bool CallFunc_IsVisible_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "HideEchoOnClient");

	Params::ABP_CodexActor_C_HideEchoOnClient_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_ReturnValue = CallFunc_NVFX_SpawnSystem_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned = CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.UpdateCodexVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCodexVisibility_bShouldBeVisible                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::UpdateCodexVisibility(bool CallFunc_IsActive_ReturnValue, bool CallFunc_CheckCodexVisibility_bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "UpdateCodexVisibility");

	Params::ABP_CodexActor_C_UpdateCodexVisibility_Params Parms{};

	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_CheckCodexVisibility_bShouldBeVisible = CallFunc_CheckCodexVisibility_bShouldBeVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.PerformClientSideInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::PerformClientSideInteraction(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "PerformClientSideInteraction");

	Params::ABP_CodexActor_C_PerformClientSideInteraction_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CodexActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodexActor.BP_CodexActor_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "ReceiveEndPlay");

	Params::ABP_CodexActor_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexActor.BP_CodexActor_C.ExecuteUbergraph_BP_CodexActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           K2Node_DynamicCast_AsNWXGame_State_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexAssetReference_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCodexAssetReference        CallFunc_GetCodexAssetReference_ReturnValue                      (ConstParm, NoDestructor)
// TScriptInterface<class ICodexComponentInterface>CallFunc_GetCodexComponentID_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexComponentID_OutID                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_GrantCodexEntry_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CodexActor_C::ExecuteUbergraph_BP_CodexActor(int32 EntryPoint, class AController* K2Node_Event_Controller, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, bool CallFunc_HasAuthority_ReturnValue_1, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput, const struct FCodexAssetReference& CallFunc_GetCodexAssetReference_ReturnValue, TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput, const struct FGuid& CallFunc_GetCodexComponentID_OutID, TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexActor_C", "ExecuteUbergraph_BP_CodexActor");

	Params::ABP_CodexActor_C_ExecuteUbergraph_BP_CodexActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXGame_State_Base = K2Node_DynamicCast_AsNWXGame_State_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetCodexAssetReference_self_CastInput = CallFunc_GetCodexAssetReference_self_CastInput;
	Parms.CallFunc_GetCodexAssetReference_ReturnValue = CallFunc_GetCodexAssetReference_ReturnValue;
	Parms.CallFunc_GetCodexComponentID_self_CastInput = CallFunc_GetCodexComponentID_self_CastInput;
	Parms.CallFunc_GetCodexComponentID_OutID = CallFunc_GetCodexComponentID_OutID;
	Parms.CallFunc_GrantCodexEntry_self_CastInput = CallFunc_GrantCodexEntry_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


