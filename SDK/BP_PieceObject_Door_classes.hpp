#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x309 - 0x1F1)
// BlueprintGeneratedClass BP_PieceObject_Door.BP_PieceObject_Door_C
class UBP_PieceObject_Door_C : public UBP_StructureCompositePiece_C
{
public:
	uint8                                        Pad_A61A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                            CachedDoorStateTransform;                          // 0x200(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            OriginalTransform;                                 // 0x260(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PreviousSwingRotation;                             // 0x2C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              DoorOpenRightRotation;                             // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              DoorOpenLeftRotation;                              // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInitilised;                                      // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PieceObject_Door_C* GetDefaultObj();

	void ForceAcousticOpeningState(bool Open, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAcousticOpeningComponent* CallFunc_GetNearestAcousticOpening_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateAcousticOpeningState(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_IsOpen_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAcousticOpeningComponent* CallFunc_GetNearestAcousticOpening_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandleAudio(class UScopedAkComponent* AkComponent, TSoftObjectPtr<class UAkAudioEvent> InteractionEvent, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, enum class EStructureFXActivationTime Temp_byte_Variable, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsOpen_ReturnValue, const struct FStructureFXAudioDefinitionArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void LoadFromPersistence(bool CallFunc_IsDoorOpenRight_ReturnValue, const struct FTransform& CallFunc_GetMeshOriginTransform_OriginTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_GetMeshOriginTransform_OriginTransform_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue_1, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1);
	bool IsDoorOpenRight(const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_HasTag_ReturnValue);
	void GetBoxTraceLocation(bool SwingRight, struct FVector* TraceLocation, struct FRotator* TraceRotation, struct FVector* TraceHalfSize, TArray<class UObject*>* IgnoreObjects, const struct FVector& BoxMovementVector, const struct FVector& Left, const struct FVector& Right, bool CallFunc_IsDoorOpenRight_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, bool CallFunc_IsOpen_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<class UObject*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetMeshBounds_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1);
	void GetDoorSwingDirection(const struct FVector& PlayerLocation, bool* SwingRight, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void CanToggle(const struct FVector& PlayerLocation, bool* CanToggle, const struct FVector& SwingRight, const struct FVector& SwingLeft);
	void ToggleDoor(const struct FVector& PlayerLocation, bool LSwingRight, bool Temp_bool_Variable, const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDoorOpenLeftTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue_1, const struct FGameplayTag& CallFunc_GetDoorOpenLeftTag_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, const struct FGameplayTag& K2Node_Select_Default_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue, bool CallFunc_GetDoorSwingDirection_SwingRight, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_IsOpen_ReturnValue);
	bool IsOpen(const struct FGameplayTag& CallFunc_GetDoorOpenRightTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDoorOpenLeftTag_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void K2_OnRepCompositePieceData();
	void K2_OnBeginPlay();
	void K2_OnDestroyed();
	void ExecuteUbergraph_BP_PieceObject_Door(int32 EntryPoint, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetCompositePieceGameplay_GameplayData, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, const struct FTransform& CallFunc_GetMeshOriginTransform_OriginTransform, bool CallFunc_IsOpen_ReturnValue);
};

}


