#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PieceObject_Door.BP_PieceObject_Door_C
// (None)

class UClass* UBP_PieceObject_Door_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PieceObject_Door_C");

	return Clss;
}


// BP_PieceObject_Door_C BP_PieceObject_Door.Default__BP_PieceObject_Door_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PieceObject_Door_C* UBP_PieceObject_Door_C::GetDefaultObj()
{
	static class UBP_PieceObject_Door_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PieceObject_Door_C*>(UBP_PieceObject_Door_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.ForceAcousticOpeningState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAcousticOpeningComponent*   CallFunc_GetNearestAcousticOpening_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::ForceAcousticOpeningState(bool Open, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAcousticOpeningComponent* CallFunc_GetNearestAcousticOpening_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "ForceAcousticOpeningState");

	Params::UBP_PieceObject_Door_C_ForceAcousticOpeningState_Params Parms{};

	Parms.Open = Open;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetNearestAcousticOpening_ReturnValue = CallFunc_GetNearestAcousticOpening_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.UpdateAcousticOpeningState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAcousticOpeningComponent*   CallFunc_GetNearestAcousticOpening_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::UpdateAcousticOpeningState(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_IsOpen_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAcousticOpeningComponent* CallFunc_GetNearestAcousticOpening_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "UpdateAcousticOpeningState");

	Params::UBP_PieceObject_Door_C_UpdateAcousticOpeningState_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetNearestAcousticOpening_ReturnValue = CallFunc_GetNearestAcousticOpening_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.HandleAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>InteractionEvent                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructureData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureData              CallFunc_GetStructureData_OutStructureData                       (ContainsInstancedReference)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureFXAudioDefinitionArrayCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::HandleAudio(class UScopedAkComponent* AkComponent, TSoftObjectPtr<class UAkAudioEvent> InteractionEvent, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, enum class EStructureFXActivationTime Temp_byte_Variable, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsOpen_ReturnValue, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "HandleAudio");

	Params::UBP_PieceObject_Door_C_HandleAudio_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.InteractionEvent = InteractionEvent;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetStructureData_IsValid = CallFunc_GetStructureData_IsValid;
	Parms.CallFunc_GetStructureData_OutStructureData = CallFunc_GetStructureData_OutStructureData;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.LoadFromPersistence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDoorOpenRight_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetMeshOriginTransform_OriginTransform                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetStructureWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetMeshOriginTransform_OriginTransform_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetStructureWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::LoadFromPersistence(bool CallFunc_IsDoorOpenRight_ReturnValue, const struct FTransform& CallFunc_GetMeshOriginTransform_OriginTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_GetMeshOriginTransform_OriginTransform_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue_1, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "LoadFromPersistence");

	Params::UBP_PieceObject_Door_C_LoadFromPersistence_Params Parms{};

	Parms.CallFunc_IsDoorOpenRight_ReturnValue = CallFunc_IsDoorOpenRight_ReturnValue;
	Parms.CallFunc_GetMeshOriginTransform_OriginTransform = CallFunc_GetMeshOriginTransform_OriginTransform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetStructureWorldTransform_ReturnValue = CallFunc_GetStructureWorldTransform_ReturnValue;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_GetMeshOriginTransform_OriginTransform_1 = CallFunc_GetMeshOriginTransform_OriginTransform_1;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue_1 = CallFunc_Multiply_RotatorFloat_ReturnValue_1;
	Parms.CallFunc_GetStructureWorldTransform_ReturnValue_1 = CallFunc_GetStructureWorldTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.IsDoorOpenRight
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenRightTag_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PieceObject_Door_C::IsDoorOpenRight(const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "IsDoorOpenRight");

	Params::UBP_PieceObject_Door_C_IsDoorOpenRight_Params Parms{};

	Parms.CallFunc_GetDoorOpenRightTag_ReturnValue = CallFunc_GetDoorOpenRightTag_ReturnValue;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.GetBoxTraceLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SwingRight                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TraceRotation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TraceHalfSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             IgnoreObjects                                                    (ConstParm, Parm, OutParm)
// struct FVector                     BoxMovementVector                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Left                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Right                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDoorOpenRight_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMeshBounds_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::GetBoxTraceLocation(bool SwingRight, struct FVector* TraceLocation, struct FRotator* TraceRotation, struct FVector* TraceHalfSize, TArray<class UObject*>* IgnoreObjects, const struct FVector& BoxMovementVector, const struct FVector& Left, const struct FVector& Right, bool CallFunc_IsDoorOpenRight_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, bool CallFunc_IsOpen_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<class UObject*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetMeshBounds_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "GetBoxTraceLocation");

	Params::UBP_PieceObject_Door_C_GetBoxTraceLocation_Params Parms{};

	Parms.SwingRight = SwingRight;
	Parms.BoxMovementVector = BoxMovementVector;
	Parms.Left = Left;
	Parms.Right = Right;
	Parms.CallFunc_IsDoorOpenRight_ReturnValue = CallFunc_IsDoorOpenRight_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetMeshBounds_ReturnValue = CallFunc_GetMeshBounds_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceLocation != nullptr)
		*TraceLocation = std::move(Parms.TraceLocation);

	if (TraceRotation != nullptr)
		*TraceRotation = std::move(Parms.TraceRotation);

	if (TraceHalfSize != nullptr)
		*TraceHalfSize = std::move(Parms.TraceHalfSize);

	if (IgnoreObjects != nullptr)
		*IgnoreObjects = std::move(Parms.IgnoreObjects);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.GetDoorSwingDirection
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     PlayerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SwingRight                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::GetDoorSwingDirection(const struct FVector& PlayerLocation, bool* SwingRight, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "GetDoorSwingDirection");

	Params::UBP_PieceObject_Door_C_GetDoorSwingDirection_Params Parms{};

	Parms.PlayerLocation = PlayerLocation;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SwingRight != nullptr)
		*SwingRight = Parms.SwingRight;

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.CanToggle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PlayerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanToggle                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SwingRight                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SwingLeft                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::CanToggle(const struct FVector& PlayerLocation, bool* CanToggle, const struct FVector& SwingRight, const struct FVector& SwingLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "CanToggle");

	Params::UBP_PieceObject_Door_C_CanToggle_Params Parms{};

	Parms.PlayerLocation = PlayerLocation;
	Parms.SwingRight = SwingRight;
	Parms.SwingLeft = SwingLeft;

	UObject::ProcessEvent(Func, &Parms);

	if (CanToggle != nullptr)
		*CanToggle = Parms.CanToggle;

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.ToggleDoor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PlayerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LSwingRight                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenRightTag_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenLeftTag_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenRightTag_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenLeftTag_ReturnValue_1                        (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_1                                          (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDoorSwingDirection_SwingRight                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetStructureWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetStructureWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::ToggleDoor(const struct FVector& PlayerLocation, bool LSwingRight, bool Temp_bool_Variable, const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDoorOpenLeftTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue_1, const struct FGameplayTag& CallFunc_GetDoorOpenLeftTag_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, const struct FGameplayTag& K2Node_Select_Default_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue, bool CallFunc_GetDoorSwingDirection_SwingRight, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "ToggleDoor");

	Params::UBP_PieceObject_Door_C_ToggleDoor_Params Parms{};

	Parms.PlayerLocation = PlayerLocation;
	Parms.LSwingRight = LSwingRight;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDoorOpenRightTag_ReturnValue = CallFunc_GetDoorOpenRightTag_ReturnValue;
	Parms.CallFunc_GetDoorOpenLeftTag_ReturnValue = CallFunc_GetDoorOpenLeftTag_ReturnValue;
	Parms.CallFunc_GetDoorOpenRightTag_ReturnValue_1 = CallFunc_GetDoorOpenRightTag_ReturnValue_1;
	Parms.CallFunc_GetDoorOpenLeftTag_ReturnValue_1 = CallFunc_GetDoorOpenLeftTag_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_GetDoorSwingDirection_SwingRight = CallFunc_GetDoorSwingDirection_SwingRight;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_GetStructureWorldTransform_ReturnValue = CallFunc_GetStructureWorldTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetStructureWorldTransform_ReturnValue_1 = CallFunc_GetStructureWorldTransform_ReturnValue_1;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.IsOpen
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenRightTag_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetDoorOpenLeftTag_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PieceObject_Door_C::IsOpen(const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDoorOpenLeftTag_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "IsOpen");

	Params::UBP_PieceObject_Door_C_IsOpen_Params Parms{};

	Parms.CallFunc_GetDoorOpenRightTag_ReturnValue = CallFunc_GetDoorOpenRightTag_ReturnValue;
	Parms.CallFunc_GetDoorOpenLeftTag_ReturnValue = CallFunc_GetDoorOpenLeftTag_ReturnValue;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.K2_OnRepCompositePieceData
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PieceObject_Door_C::K2_OnRepCompositePieceData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "K2_OnRepCompositePieceData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.K2_OnBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PieceObject_Door_C::K2_OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "K2_OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.K2_OnDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PieceObject_Door_C::K2_OnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "K2_OnDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PieceObject_Door.BP_PieceObject_Door_C.ExecuteUbergraph_BP_PieceObject_Door
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceGameplay     CallFunc_GetCompositePieceGameplay_GameplayData                  (None)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetMeshOriginTransform_OriginTransform                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpen_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PieceObject_Door_C::ExecuteUbergraph_BP_PieceObject_Door(int32 EntryPoint, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, const struct FTransform& CallFunc_GetMeshOriginTransform_OriginTransform, bool CallFunc_IsOpen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PieceObject_Door_C", "ExecuteUbergraph_BP_PieceObject_Door");

	Params::UBP_PieceObject_Door_C_ExecuteUbergraph_BP_PieceObject_Door_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_GetCompositePieceGameplay_GameplayData = CallFunc_GetCompositePieceGameplay_GameplayData;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;
	Parms.CallFunc_GetMeshOriginTransform_OriginTransform = CallFunc_GetMeshOriginTransform_OriginTransform;
	Parms.CallFunc_IsOpen_ReturnValue = CallFunc_IsOpen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


