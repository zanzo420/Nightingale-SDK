#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Test_Helpers.BPFL_Test_Helpers_C
// (None)

class UClass* UBPFL_Test_Helpers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Test_Helpers_C");

	return Clss;
}


// BPFL_Test_Helpers_C BPFL_Test_Helpers.Default__BPFL_Test_Helpers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Test_Helpers_C* UBPFL_Test_Helpers_C::GetDefaultObj()
{
	static class UBPFL_Test_Helpers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Test_Helpers_C*>(UBPFL_Test_Helpers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetRevolverAmmoItemReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          AmmoReference                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetRevolverAmmoItemReference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& AmmoReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetRevolverAmmoItemReference");

	Params::UBPFL_Test_Helpers_C_GetRevolverAmmoItemReference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.AmmoReference = AmmoReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Get Revolver Item Reference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          Revolver_Reference                                               (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::Get_Revolver_Item_Reference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& Revolver_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "Get Revolver Item Reference");

	Params::UBPFL_Test_Helpers_C_Get_Revolver_Item_Reference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Revolver_Reference = Revolver_Reference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetGliderItemReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          GliderReference                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetGliderItemReference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& GliderReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetGliderItemReference");

	Params::UBPFL_Test_Helpers_C_GetGliderItemReference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.GliderReference = GliderReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.RegrowAllResources
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::RegrowAllResources(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "RegrowAllResources");

	Params::UBPFL_Test_Helpers_C_RegrowAllResources_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Reset All Resources
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_ResourceNode_IIM_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNode_IIM_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::Reset_All_Resources(class UObject* __WorldContext, TArray<class ABP_ResourceNode_IIM_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class ABP_ResourceNode_IIM_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "Reset All Resources");

	Params::UBPFL_Test_Helpers_C_Reset_All_Resources_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultPossessedCharacterInDefaultLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             SpawnedCharacter                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 SpawnedController                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Error                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetDefaultSpawnTransform_DefaultTransform               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDefaultSpawnTransform_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDefaultSpawnTransform_ErrorMessage                   (ZeroConstructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_SpawnDefaultPossessedCharacter_SpawnedCharacter         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_SpawnDefaultPossessedCharacter_SpawnedController        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnDefaultPossessedCharacter_bSuccess                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SpawnDefaultPossessedCharacter_ErrorMessage             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::SpawnDefaultPossessedCharacterInDefaultLocation(class UObject* __WorldContext, class ABP_Character_C** SpawnedCharacter, class AController** SpawnedController, bool* Success, class FString* ErrorMessage, const class FString& Error, const struct FTransform& CallFunc_GetDefaultSpawnTransform_DefaultTransform, bool CallFunc_GetDefaultSpawnTransform_Success, const class FString& CallFunc_GetDefaultSpawnTransform_ErrorMessage, class ABP_Character_C* CallFunc_SpawnDefaultPossessedCharacter_SpawnedCharacter, class AController* CallFunc_SpawnDefaultPossessedCharacter_SpawnedController, bool CallFunc_SpawnDefaultPossessedCharacter_bSuccess, const class FString& CallFunc_SpawnDefaultPossessedCharacter_ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "SpawnDefaultPossessedCharacterInDefaultLocation");

	Params::UBPFL_Test_Helpers_C_SpawnDefaultPossessedCharacterInDefaultLocation_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Error = Error;
	Parms.CallFunc_GetDefaultSpawnTransform_DefaultTransform = CallFunc_GetDefaultSpawnTransform_DefaultTransform;
	Parms.CallFunc_GetDefaultSpawnTransform_Success = CallFunc_GetDefaultSpawnTransform_Success;
	Parms.CallFunc_GetDefaultSpawnTransform_ErrorMessage = CallFunc_GetDefaultSpawnTransform_ErrorMessage;
	Parms.CallFunc_SpawnDefaultPossessedCharacter_SpawnedCharacter = CallFunc_SpawnDefaultPossessedCharacter_SpawnedCharacter;
	Parms.CallFunc_SpawnDefaultPossessedCharacter_SpawnedController = CallFunc_SpawnDefaultPossessedCharacter_SpawnedController;
	Parms.CallFunc_SpawnDefaultPossessedCharacter_bSuccess = CallFunc_SpawnDefaultPossessedCharacter_bSuccess;
	Parms.CallFunc_SpawnDefaultPossessedCharacter_ErrorMessage = CallFunc_SpawnDefaultPossessedCharacter_ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedCharacter != nullptr)
		*SpawnedCharacter = Parms.SpawnedCharacter;

	if (SpawnedController != nullptr)
		*SpawnedController = Parms.SpawnedController;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GrantRequirementsToPlayer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>Requirements                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_SLOW_FindItemMeetingRequirements_ItemName               (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrantItemToPlayer_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GrantItemToPlayer_Message                               (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GrantRequirementsToPlayer(class ABP_Character_C* Character, TArray<struct FStructureResourceRequirements>& Requirements, class UObject* __WorldContext, bool* Success, class FString* Message, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, int32 CallFunc_GetQuantityRemaining_ReturnValue, const struct FItemDataReference& CallFunc_SLOW_FindItemMeetingRequirements_ItemName, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GrantItemToPlayer_Success, const class FString& CallFunc_GrantItemToPlayer_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GrantRequirementsToPlayer");

	Params::UBPFL_Test_Helpers_C_GrantRequirementsToPlayer_Params Parms{};

	Parms.Character = Character;
	Parms.Requirements = Requirements;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.CallFunc_SLOW_FindItemMeetingRequirements_ItemName = CallFunc_SLOW_FindItemMeetingRequirements_ItemName;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GrantItemToPlayer_Success = CallFunc_GrantItemToPlayer_Success;
	Parms.CallFunc_GrantItemToPlayer_Message = CallFunc_GrantItemToPlayer_Message;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetWoodItemReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          WoodReference                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetWoodItemReference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& WoodReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetWoodItemReference");

	Params::UBPFL_Test_Helpers_C_GetWoodItemReference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.WoodReference = WoodReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetRifleAmmoItemReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          AmmoReference                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetRifleAmmoItemReference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& AmmoReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetRifleAmmoItemReference");

	Params::UBPFL_Test_Helpers_C_GetRifleAmmoItemReference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.AmmoReference = AmmoReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetUnarmedItemReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          UnarmedReference                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetUnarmedItemReference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& UnarmedReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetUnarmedItemReference");

	Params::UBPFL_Test_Helpers_C_GetUnarmedItemReference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.UnarmedReference = UnarmedReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Get Rifle Item Reference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          RifleReference                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::Get_Rifle_Item_Reference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& RifleReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "Get Rifle Item Reference");

	Params::UBPFL_Test_Helpers_C_Get_Rifle_Item_Reference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.RifleReference = RifleReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.FindAllPiecesOfType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      PieceClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             OutPieces                                                        (Parm, OutParm)
// TArray<class UBP_StructureCompositePiece_C*>Pieces                                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Structure_Composite_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*CallFunc_GetCompositeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    CallFunc_GetCompositePiece_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureCompositePiece_C*K2Node_DynamicCast_AsBP_Structure_Composite_Piece                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPieceCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::FindAllPiecesOfType(class UClass* PieceClass, class UObject* __WorldContext, TArray<class UObject*>* OutPieces, const TArray<class UBP_StructureCompositePiece_C*>& Pieces, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_ClassIsChildOf_ReturnValue, int32 Temp_int_Variable, TArray<class ABP_Structure_Composite_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_Structure_Composite_C* CallFunc_Array_Get_Item, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_StructureCompositePiece_C* K2Node_DynamicCast_AsBP_Structure_Composite_Piece, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_GetPieceCount_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "FindAllPiecesOfType");

	Params::UBPFL_Test_Helpers_C_FindAllPiecesOfType_Params Parms{};

	Parms.PieceClass = PieceClass;
	Parms.__WorldContext = __WorldContext;
	Parms.Pieces = Pieces;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCompositeComponent_ReturnValue = CallFunc_GetCompositeComponent_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCompositePiece_ReturnValue = CallFunc_GetCompositePiece_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Composite_Piece = K2Node_DynamicCast_AsBP_Structure_Composite_Piece;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetPieceCount_ReturnValue = CallFunc_GetPieceCount_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPieces != nullptr)
		*OutPieces = std::move(Parms.OutPieces);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.EquipGear
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemToEquip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    EquippedItem                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Error                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     Inventory                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrantItemToPlayer_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GrantItemToPlayer_Message                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_FindFirstItemByItemId_Entry                             (None)
// bool                               CallFunc_FindFirstItemByItemId_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipNonQuickbarItem_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_EquipNonQuickbarItem_EquippedItem                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::EquipGear(class ABP_Character_C* PlayerCharacter, const struct FItemDataReference& ItemToEquip, class UObject* __WorldContext, bool* Success, class FString* Message, class ABP_EquippableItemBase_C** EquippedItem, const class FString& Error, class UInventoryComponentBase* Inventory, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GrantItemToPlayer_Success, const class FString& CallFunc_GrantItemToPlayer_Message, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const struct FInventoryEntry& CallFunc_FindFirstItemByItemId_Entry, bool CallFunc_FindFirstItemByItemId_ReturnValue, bool CallFunc_EquipNonQuickbarItem_Success, class AEquippableItem* CallFunc_EquipNonQuickbarItem_EquippedItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "EquipGear");

	Params::UBPFL_Test_Helpers_C_EquipGear_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.ItemToEquip = ItemToEquip;
	Parms.__WorldContext = __WorldContext;
	Parms.Error = Error;
	Parms.Inventory = Inventory;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GrantItemToPlayer_Success = CallFunc_GrantItemToPlayer_Success;
	Parms.CallFunc_GrantItemToPlayer_Message = CallFunc_GrantItemToPlayer_Message;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_FindFirstItemByItemId_Entry = CallFunc_FindFirstItemByItemId_Entry;
	Parms.CallFunc_FindFirstItemByItemId_ReturnValue = CallFunc_FindFirstItemByItemId_ReturnValue;
	Parms.CallFunc_EquipNonQuickbarItem_Success = CallFunc_EquipNonQuickbarItem_Success;
	Parms.CallFunc_EquipNonQuickbarItem_EquippedItem = CallFunc_EquipNonQuickbarItem_EquippedItem;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.ReleaseBPControllerAbility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionTypes       ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::ReleaseBPControllerAbility(class AController* Controller, enum class EInputActionTypes ActionType, class UObject* __WorldContext, bool* Success, class FString* ErrorMessage, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "ReleaseBPControllerAbility");

	Params::UBPFL_Test_Helpers_C_ReleaseBPControllerAbility_Params Parms{};

	Parms.Controller = Controller;
	Parms.ActionType = ActionType;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Force Add Default Containers
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::Force_Add_Default_Containers(class APlayerController* PlayerController, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "Force Add Default Containers");

	Params::UBPFL_Test_Helpers_C_Force_Add_Default_Containers_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetAxePickItemReference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          AxepickReference                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetAxePickItemReference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& AxepickReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetAxePickItemReference");

	Params::UBPFL_Test_Helpers_C_GetAxePickItemReference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.AxepickReference = AxepickReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.FindFirstTargetActorOfClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      TargetActorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABPTA_TargetingActorLogic_C* TargetActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABPTA_TargetingActorLogic_C*>TargetActors                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class ABPTA_TargetingActorLogic_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ABPTA_TargetingActorLogic_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::FindFirstTargetActorOfClass(class UClass* TargetActorClass, class UObject* __WorldContext, class ABPTA_TargetingActorLogic_C** TargetActor, const TArray<class ABPTA_TargetingActorLogic_C*>& TargetActors, TArray<class ABPTA_TargetingActorLogic_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABPTA_TargetingActorLogic_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "FindFirstTargetActorOfClass");

	Params::UBPFL_Test_Helpers_C_FindFirstTargetActorOfClass_Params Parms{};

	Parms.TargetActorClass = TargetActorClass;
	Parms.__WorldContext = __WorldContext;
	Parms.TargetActors = TargetActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.Get Build Hammer Reference
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FItemDataReference          BuildHammerReference                                             (Edit, BlueprintVisible, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::Get_Build_Hammer_Reference(class UObject* __WorldContext, struct FItemDataReference* ItemReference, const struct FItemDataReference& BuildHammerReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "Get Build Hammer Reference");

	Params::UBPFL_Test_Helpers_C_Get_Build_Hammer_Reference_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.BuildHammerReference = BuildHammerReference;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemReference != nullptr)
		*ItemReference = std::move(Parms.ItemReference);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.MoveCharacterForward
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::MoveCharacterForward(class ABP_Character_C* Character, class UObject* __WorldContext, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "MoveCharacterForward");

	Params::UBPFL_Test_Helpers_C_MoveCharacterForward_Params Parms{};

	Parms.Character = Character;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.ExecuteBPControllerAbility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionTypes       ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::ExecuteBPControllerAbility(class AController* Controller, enum class EInputActionTypes ActionType, class UObject* __WorldContext, bool* Success, class FString* ErrorMessage, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "ExecuteBPControllerAbility");

	Params::UBPFL_Test_Helpers_C_ExecuteBPControllerAbility_Params Parms{};

	Parms.Controller = Controller;
	Parms.ActionType = ActionType;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.IsValidUniqueId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      UniqueID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::IsValidUniqueId(const class FString& UniqueID, class UObject* __WorldContext, bool* IsValid, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "IsValidUniqueId");

	Params::UBPFL_Test_Helpers_C_IsValidUniqueId_Params Parms{};

	Parms.UniqueID = UniqueID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.InitializeRandomPersistentUniqueId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueId_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_NewGuid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidUniqueId_IsValid                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::InitializeRandomPersistentUniqueId(class AController*& Controller, class UObject* __WorldContext, bool* Success, class FString* Message, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, const struct FGuid& CallFunc_NewGuid_ReturnValue, bool CallFunc_IsValidUniqueId_IsValid, const class FString& CallFunc_Conv_GuidToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "InitializeRandomPersistentUniqueId");

	Params::UBPFL_Test_Helpers_C_InitializeRandomPersistentUniqueId_Params Parms{};

	Parms.Controller = Controller;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPersistentUniqueId_ReturnValue = CallFunc_GetPersistentUniqueId_ReturnValue;
	Parms.CallFunc_NewGuid_ReturnValue = CallFunc_NewGuid_ReturnValue;
	Parms.CallFunc_IsValidUniqueId_IsValid = CallFunc_IsValidUniqueId_IsValid;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SetIsDaytime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureManager_C*       CreatureManager                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::SetIsDaytime(class ABP_CreatureManager_C* CreatureManager, bool IsDayTime, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "SetIsDaytime");

	Params::UBPFL_Test_Helpers_C_SetIsDaytime_Params Parms{};

	Parms.CreatureManager = CreatureManager;
	Parms.IsDayTime = IsDayTime;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.IsItemEquipped
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::IsItemEquipped(class AController* Controller, const struct FDataTableRowHandle& ItemId, const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* IsEquipped, class FString* Message, class AEquippableItem* Temp_object_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "IsItemEquipped");

	Params::UBPFL_Test_Helpers_C_IsItemEquipped_Params Parms{};

	Parms.Controller = Controller;
	Parms.ItemId = ItemId;
	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue = CallFunc_EqualEqual_FItemDataReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.RemoveAllItemsFromPlayer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::RemoveAllItemsFromPlayer(class APawn* Pawn, class UObject* __WorldContext, bool* Success, class FString* Message, TScriptInterface<class IItemContainer> Backpack, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class AController* CallFunc_GetController_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_RemoveItem_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "RemoveAllItemsFromPlayer");

	Params::UBPFL_Test_Helpers_C_RemoveAllItemsFromPlayer_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.__WorldContext = __WorldContext;
	Parms.Backpack = Backpack;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GrantItemToPlayer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              ItemCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemInstanceData*>   Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItem_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItem_ClaimedInstances                              (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItem_UnclaimedItems                                (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GrantItemToPlayer(class APawn* Character, const struct FDataTableRowHandle& ItemId, const struct FItemDataReference& ItemReference, int32 ItemCount, class UObject* __WorldContext, bool* Success, class FString* Message, bool CallFunc_IsValid_ReturnValue, TArray<class UItemInstanceData*>& Temp_object_Variable, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GrantItemToPlayer");

	Params::UBPFL_Test_Helpers_C_GrantItemToPlayer_Params Parms{};

	Parms.Character = Character;
	Parms.ItemId = ItemId;
	Parms.ItemReference = ItemReference;
	Parms.ItemCount = ItemCount;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.CallFunc_ClaimItem_bSuccess = CallFunc_ClaimItem_bSuccess;
	Parms.CallFunc_ClaimItem_ClaimedInstances = CallFunc_ClaimItem_ClaimedInstances;
	Parms.CallFunc_ClaimItem_UnclaimedItems = CallFunc_ClaimItem_UnclaimedItems;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetNewItemInstances
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberOfInstances                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InstanceWithQuantity>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<struct FS_InstanceWithQuantity>NewInstances                                                     (Edit, BlueprintVisible)
// struct FGuid                       CallFunc_NewUniqueInstanceId_InstanceId                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InstanceWithQuantity     K2Node_MakeStruct_S_InstanceWithQuantity                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<struct FS_InstanceWithQuantity> UBPFL_Test_Helpers_C::GetNewItemInstances(int32 NumberOfInstances, class UObject* __WorldContext, const TArray<struct FS_InstanceWithQuantity>& NewInstances, const struct FGuid& CallFunc_NewUniqueInstanceId_InstanceId, const struct FS_InstanceWithQuantity& K2Node_MakeStruct_S_InstanceWithQuantity, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetNewItemInstances");

	Params::UBPFL_Test_Helpers_C_GetNewItemInstances_Params Parms{};

	Parms.NumberOfInstances = NumberOfInstances;
	Parms.__WorldContext = __WorldContext;
	Parms.NewInstances = NewInstances;
	Parms.CallFunc_NewUniqueInstanceId_InstanceId = CallFunc_NewUniqueInstanceId_InstanceId;
	Parms.K2Node_MakeStruct_S_InstanceWithQuantity = K2Node_MakeStruct_S_InstanceWithQuantity;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.EquipItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    EquippedItem                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (Edit, BlueprintVisible)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_Character_C*             BP_Character                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemInstanceData*>   Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_GetItemEquipmentSlotTag_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItem_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItem_ClaimedInstances                              (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItem_UnclaimedItems                                (ReferenceParm)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInLoadoutSlot_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::EquipItem(class APawn* Character, const struct FItemDataReference& ItemReference, class UObject* __WorldContext, class ABP_EquippableItemBase_C** EquippedItem, bool* Success, class FString* ErrorMessage, class AController* Controller, const struct FInventoryEntry& ItemEntry, TScriptInterface<class IItemContainer> Backpack, class ABP_Character_C* BP_Character, class AEquippableItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<class UItemInstanceData*>& Temp_object_Variable_1, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "EquipItem");

	Params::UBPFL_Test_Helpers_C_EquipItem_Params Parms{};

	Parms.Character = Character;
	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.Controller = Controller;
	Parms.ItemEntry = ItemEntry;
	Parms.Backpack = Backpack;
	Parms.BP_Character = BP_Character;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetItemEquipmentSlotTag_bSuccess = CallFunc_GetItemEquipmentSlotTag_bSuccess;
	Parms.CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag = CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag;
	Parms.CallFunc_ClaimItem_bSuccess = CallFunc_ClaimItem_bSuccess;
	Parms.CallFunc_ClaimItem_ClaimedInstances = CallFunc_ClaimItem_ClaimedInstances;
	Parms.CallFunc_ClaimItem_UnclaimedItems = CallFunc_ClaimItem_UnclaimedItems;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemInLoadoutSlot_ReturnValue = CallFunc_GetItemInLoadoutSlot_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultPossessedCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             SpawnedCharacter                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 SpawnedController                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AController*                 L_Controller                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             L_Character                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_SpawnDefaultController_SpawnedController                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnDefaultController_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SpawnDefaultController_ErrorMessage                     (ZeroConstructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_SpawnDefaultCharacter_SpawnedCharacter                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnDefaultCharacter_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SpawnDefaultCharacter_ErrorMessage                      (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::SpawnDefaultPossessedCharacter(const struct FTransform& Location, class UObject* __WorldContext, class ABP_Character_C** SpawnedCharacter, class AController** SpawnedController, bool* bSuccess, class FString* ErrorMessage, class AController* L_Controller, class ABP_Character_C* L_Character, class AController* CallFunc_SpawnDefaultController_SpawnedController, bool CallFunc_SpawnDefaultController_Success, const class FString& CallFunc_SpawnDefaultController_ErrorMessage, class ABP_Character_C* CallFunc_SpawnDefaultCharacter_SpawnedCharacter, bool CallFunc_SpawnDefaultCharacter_Success, const class FString& CallFunc_SpawnDefaultCharacter_ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "SpawnDefaultPossessedCharacter");

	Params::UBPFL_Test_Helpers_C_SpawnDefaultPossessedCharacter_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.L_Controller = L_Controller;
	Parms.L_Character = L_Character;
	Parms.CallFunc_SpawnDefaultController_SpawnedController = CallFunc_SpawnDefaultController_SpawnedController;
	Parms.CallFunc_SpawnDefaultController_Success = CallFunc_SpawnDefaultController_Success;
	Parms.CallFunc_SpawnDefaultController_ErrorMessage = CallFunc_SpawnDefaultController_ErrorMessage;
	Parms.CallFunc_SpawnDefaultCharacter_SpawnedCharacter = CallFunc_SpawnDefaultCharacter_SpawnedCharacter;
	Parms.CallFunc_SpawnDefaultCharacter_Success = CallFunc_SpawnDefaultCharacter_Success;
	Parms.CallFunc_SpawnDefaultCharacter_ErrorMessage = CallFunc_SpawnDefaultCharacter_ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedCharacter != nullptr)
		*SpawnedCharacter = Parms.SpawnedCharacter;

	if (SpawnedController != nullptr)
		*SpawnedController = Parms.SpawnedController;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultController
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 SpawnedController                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Force_Add_Default_Containers_Success                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeRandomPersistentUniqueId_Success              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_InitializeRandomPersistentUniqueId_Message              (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::SpawnDefaultController(const struct FTransform& Location, class UObject* __WorldContext, class AController** SpawnedController, bool* Success, class FString* ErrorMessage, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerController* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Force_Add_Default_Containers_Success, bool CallFunc_InitializeRandomPersistentUniqueId_Success, const class FString& CallFunc_InitializeRandomPersistentUniqueId_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "SpawnDefaultController");

	Params::UBPFL_Test_Helpers_C_SpawnDefaultController_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Force_Add_Default_Containers_Success = CallFunc_Force_Add_Default_Containers_Success;
	Parms.CallFunc_InitializeRandomPersistentUniqueId_Success = CallFunc_InitializeRandomPersistentUniqueId_Success;
	Parms.CallFunc_InitializeRandomPersistentUniqueId_Message = CallFunc_InitializeRandomPersistentUniqueId_Message;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedController != nullptr)
		*SpawnedController = Parms.SpawnedController;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.SpawnDefaultCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             SpawnedCharacter                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Error                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Spawned                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::SpawnDefaultCharacter(const struct FTransform& Location, class UObject* __WorldContext, class ABP_Character_C** SpawnedCharacter, bool* Success, class FString* ErrorMessage, const class FString& Error, bool Spawned, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "SpawnDefaultCharacter");

	Params::UBPFL_Test_Helpers_C_SpawnDefaultCharacter_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.Error = Error;
	Parms.Spawned = Spawned;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedCharacter != nullptr)
		*SpawnedCharacter = Parms.SpawnedCharacter;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.GetDefaultSpawnTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  DefaultTransform                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Error                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               ValidTransform                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATargetPoint*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class ATargetPoint*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Test_Helpers_C::GetDefaultSpawnTransform(class UObject* __WorldContext, struct FTransform* DefaultTransform, bool* Success, class FString* ErrorMessage, const class FString& Error, bool ValidTransform, TArray<class ATargetPoint*>& CallFunc_GetAllActorsOfClass_OutActors, class ATargetPoint* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "GetDefaultSpawnTransform");

	Params::UBPFL_Test_Helpers_C_GetDefaultSpawnTransform_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Error = Error;
	Parms.ValidTransform = ValidTransform;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultTransform != nullptr)
		*DefaultTransform = std::move(Parms.DefaultTransform);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ErrorMessage != nullptr)
		*ErrorMessage = std::move(Parms.ErrorMessage);

}


// Function BPFL_Test_Helpers.BPFL_Test_Helpers_C.ControllerLookAtGround
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_Test_Helpers_C::ControllerLookAtGround(class AController* Controller, class UObject* __WorldContext, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Test_Helpers_C", "ControllerLookAtGround");

	Params::UBPFL_Test_Helpers_C_ControllerLookAtGround_Params Parms{};

	Parms.Controller = Controller;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


