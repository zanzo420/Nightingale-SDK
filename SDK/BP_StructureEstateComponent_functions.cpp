#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureEstateComponent.BP_StructureEstateComponent_C
// (None)

class UClass* UBP_StructureEstateComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureEstateComponent_C");

	return Clss;
}


// BP_StructureEstateComponent_C BP_StructureEstateComponent.Default__BP_StructureEstateComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureEstateComponent_C* UBP_StructureEstateComponent_C::GetDefaultObj()
{
	static class UBP_StructureEstateComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureEstateComponent_C*>(UBP_StructureEstateComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.OnOwnerMoved
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     MovedEntity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPortalActorInterface>K2Node_DynamicCast_AsPortal_Actor_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerSpawnTransform_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::OnOwnerMoved(class UObject* MovedEntity, const struct FTransform& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IPortalActorInterface> K2Node_DynamicCast_AsPortal_Actor_Interface, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller, const struct FTransform& CallFunc_GetPlayerSpawnTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "OnOwnerMoved");

	Params::UBP_StructureEstateComponent_C_OnOwnerMoved_Params Parms{};

	Parms.MovedEntity = MovedEntity;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPortal_Actor_Interface = K2Node_DynamicCast_AsPortal_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller = CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller;
	Parms.CallFunc_GetPlayerSpawnTransform_ReturnValue = CallFunc_GetPlayerSpawnTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.RemoveRespitePoint
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        NWXPlayerController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveRespitePoint_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::RemoveRespitePoint(class ANWXPlayerController* NWXPlayerController, bool CallFunc_RemoveRespitePoint_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "RemoveRespitePoint");

	Params::UBP_StructureEstateComponent_C_RemoveRespitePoint_Params Parms{};

	Parms.NWXPlayerController = NWXPlayerController;
	Parms.CallFunc_RemoveRespitePoint_ReturnValue = CallFunc_RemoveRespitePoint_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.CreateRespitePoint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        NWXPlayerController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlaceableEntityInterface>K2Node_DynamicCast_AsPlaceable_Entity_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXOwnedPlayerStart*        CallFunc_CreateRespitePoint_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPortalActorInterface>K2Node_DynamicCast_AsPortal_Actor_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerSpawnTransform_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::CreateRespitePoint(class ANWXPlayerController* NWXPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_1, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& Temp_struct_Variable, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ANWXOwnedPlayerStart* CallFunc_CreateRespitePoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue, TScriptInterface<class IPortalActorInterface> K2Node_DynamicCast_AsPortal_Actor_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_GetPlayerSpawnTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "CreateRespitePoint");

	Params::UBP_StructureEstateComponent_C_CreateRespitePoint_Params Parms{};

	Parms.NWXPlayerController = NWXPlayerController;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlaceable_Entity_Interface = K2Node_DynamicCast_AsPlaceable_Entity_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_FeatureFlagBranch_Result_1 = CallFunc_FeatureFlagBranch_Result_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CreateRespitePoint_ReturnValue = CallFunc_CreateRespitePoint_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsPortal_Actor_Interface = K2Node_DynamicCast_AsPortal_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerSpawnTransform_ReturnValue = CallFunc_GetPlayerSpawnTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.OnOwningStructureDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        LPlayerController                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UStructureEstateComponent*   EstateComponent                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerInRespiteRealm_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveRespitePoint_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_CreateRespiteAtStartSpot_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPlayerHasRespiteStructure_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRespitePoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::OnOwningStructureDestroyed(class UObject* Structure, class AActor* Instigator, class ANWXPlayerController* LPlayerController, class UStructureEstateComponent* EstateComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, bool CallFunc_RemoveRespitePoint_ReturnValue, class AActor* CallFunc_CreateRespiteAtStartSpot_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller, bool CallFunc_SetPlayerHasRespiteStructure_ReturnValue, bool CallFunc_IsRespitePoint_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "OnOwningStructureDestroyed");

	Params::UBP_StructureEstateComponent_C_OnOwningStructureDestroyed_Params Parms{};

	Parms.Structure = Structure;
	Parms.Instigator = Instigator;
	Parms.LPlayerController = LPlayerController;
	Parms.EstateComponent = EstateComponent;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsPlayerInRespiteRealm_ReturnValue = CallFunc_IsPlayerInRespiteRealm_ReturnValue;
	Parms.CallFunc_RemoveRespitePoint_ReturnValue = CallFunc_RemoveRespitePoint_ReturnValue;
	Parms.CallFunc_CreateRespiteAtStartSpot_ReturnValue = CallFunc_CreateRespiteAtStartSpot_ReturnValue;
	Parms.CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller = CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller;
	Parms.CallFunc_SetPlayerHasRespiteStructure_ReturnValue = CallFunc_SetPlayerHasRespiteStructure_ReturnValue;
	Parms.CallFunc_IsRespitePoint_ReturnValue = CallFunc_IsRespitePoint_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.GetOwningNWXPlayerController
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        AsNWXPlayer_Controller                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetOwningPlayerController_OutPlayerController           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::GetOwningNWXPlayerController(class ANWXPlayerController** AsNWXPlayer_Controller, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_HasOwningPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class AController* CallFunc_GetOwningPlayerController_OutPlayerController, bool CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "GetOwningNWXPlayerController");

	Params::UBP_StructureEstateComponent_C_GetOwningNWXPlayerController_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_HasOwningPlayer_ReturnValue = CallFunc_HasOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerController_OutPlayerController = CallFunc_GetOwningPlayerController_OutPlayerController;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsNWXPlayer_Controller != nullptr)
		*AsNWXPlayer_Controller = Parms.AsNWXPlayer_Controller;

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.ManageRespitePointSpawning
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRespitePoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        NWXPlayerController                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::ManageRespitePointSpawning(bool IsRespitePoint, class ANWXPlayerController* NWXPlayerController, class AController* PlayerController, class ANWXPlayerController* CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "ManageRespitePointSpawning");

	Params::UBP_StructureEstateComponent_C_ManageRespitePointSpawning_Params Parms{};

	Parms.IsRespitePoint = IsRespitePoint;
	Parms.NWXPlayerController = NWXPlayerController;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller = CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.SetRespitePoint
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCurrentRespitePoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerID_OutPlayerId                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructure*>       CallFunc_GetAllEstates_OutEstates                                (ReferenceParm)
// class ANWXStructure*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEstateInterface>K2Node_DynamicCast_AsStructure_Estate_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEstateComponent*   CallFunc_GetStructureEstateComponentForModify_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::SetRespitePoint(bool bCurrentRespitePoint, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const class FString& CallFunc_GetOwningPlayerID_OutPlayerId, bool CallFunc_GetOwningPlayerID_ReturnValue, TArray<class ANWXStructure*>& CallFunc_GetAllEstates_OutEstates, class ANWXStructure* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UStructureEstateComponent* CallFunc_GetStructureEstateComponentForModify_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "SetRespitePoint");

	Params::UBP_StructureEstateComponent_C_SetRespitePoint_Params Parms{};

	Parms.bCurrentRespitePoint = bCurrentRespitePoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayerID_OutPlayerId = CallFunc_GetOwningPlayerID_OutPlayerId;
	Parms.CallFunc_GetOwningPlayerID_ReturnValue = CallFunc_GetOwningPlayerID_ReturnValue;
	Parms.CallFunc_GetAllEstates_OutEstates = CallFunc_GetAllEstates_OutEstates;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Estate_Interface = K2Node_DynamicCast_AsStructure_Estate_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStructureEstateComponentForModify_ReturnValue = CallFunc_GetStructureEstateComponentForModify_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.OnOwningStructureStateChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        LPlayerController                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHaveRespiteStructure_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerSetRespiteInRealm_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerID_OutPlayerId                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::OnOwningStructureStateChanged(class ANWXPlayerController* LPlayerController, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_DoesPlayerHaveRespiteStructure_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanPlayerSetRespiteInRealm_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_GetOwningPlayerID_OutPlayerId, bool CallFunc_GetOwningPlayerID_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, class ANWXPlayerController* CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "OnOwningStructureStateChanged");

	Params::UBP_StructureEstateComponent_C_OnOwningStructureStateChanged_Params Parms{};

	Parms.LPlayerController = LPlayerController;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_DoesPlayerHaveRespiteStructure_ReturnValue = CallFunc_DoesPlayerHaveRespiteStructure_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CanPlayerSetRespiteInRealm_ReturnValue = CallFunc_CanPlayerSetRespiteInRealm_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningPlayerID_OutPlayerId = CallFunc_GetOwningPlayerID_OutPlayerId;
	Parms.CallFunc_GetOwningPlayerID_ReturnValue = CallFunc_GetOwningPlayerID_ReturnValue;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller = CallFunc_GetOwningNWXPlayerController_AsNWXPlayer_Controller;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.UpdateOwningPlayerEstateScore
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     LPlayerAbilitySystemComponent                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRespitePoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetOwningPlayerState_OutPlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::UpdateOwningPlayerEstateScore(class UAbilitySystemComponent* LPlayerAbilitySystemComponent, bool CallFunc_IsRespitePoint_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerState* CallFunc_GetOwningPlayerState_OutPlayerState, bool CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "UpdateOwningPlayerEstateScore");

	Params::UBP_StructureEstateComponent_C_UpdateOwningPlayerEstateScore_Params Parms{};

	Parms.LPlayerAbilitySystemComponent = LPlayerAbilitySystemComponent;
	Parms.CallFunc_IsRespitePoint_ReturnValue = CallFunc_IsRespitePoint_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_OutPlayerState = CallFunc_GetOwningPlayerState_OutPlayerState;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_StructureEstateComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StructureEstateComponent.BP_StructureEstateComponent_C.ExecuteUbergraph_BP_StructureEstateComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmRespitesComponent*     CallFunc_GetRealmRespitesComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureEstateComponent_C::ExecuteUbergraph_BP_StructureEstateComponent(int32 EntryPoint, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, class URealmRespitesComponent* CallFunc_GetRealmRespitesComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureEstateComponent_C", "ExecuteUbergraph_BP_StructureEstateComponent");

	Params::UBP_StructureEstateComponent_C_ExecuteUbergraph_BP_StructureEstateComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.CallFunc_GetRealmRespitesComponent_ReturnValue = CallFunc_GetRealmRespitesComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


