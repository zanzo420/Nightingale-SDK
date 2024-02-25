#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x1E0 - 0xA0)
// BlueprintGeneratedClass BP_Acoustic_Volume_Manager.BP_Acoustic_Volume_Manager_C
class UBP_Acoustic_Volume_Manager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkRtpc*                               RTPC_LocalPlayerShelter;                           // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               RTPC_PerPlayer;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               RTPC_WindOneShot;                                  // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               RTPC_InteriorGlobal;                               // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LocalPlayerShelter;                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RTPC_LocalPlayerShelter_LerpTimeMs;                // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RTPC_PerPlayer_LerpTimeMs;                         // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Amb2DEvent;                                        // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Amb2DEventStop;                                    // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       OpeningLocations;                                  // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseAcousticOpeningOcclusion;                       // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       LocalPlayerInside;                                 // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Character_C*>               PlayersInside;                                     // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UScopedAkComponent*                    Ak_Rain_Openings;                                  // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Ak_Rain_Openings_Active;                           // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ak_Hail_Openings_Active;                           // 0x121(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Rain_Update_Time;                                  // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Amb2DActive;                                       // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_Ambience_Manager_C*                AmbienceManager;                                   // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         StructureCompositeInitialized;                     // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Enclosedness;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CeilingCover;                                      // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StartRainStructureOpening;                         // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StopRainStructureOpening;                          // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StartHailStructureOpening;                         // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StopHailStructureOpening;                          // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTileSetPOI;                                      // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          RainUpdateTimerHandle;                             // 0x180(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class ABP_Character_C*, int32>          InsideNumberOfVolumes;                             // 0x188(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UScopedAkComponent*                    Ak_2DAmb;                                          // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Acoustic_Volume_Manager_C* GetDefaultObj();

	void GetInternalToExternalAcousticOpenings(bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<struct FVector>& CallFunc_GetInteriorToExteriorAcousticOpeningPositions_Positions, class ABP_StructureComposite_Base_C* K2Node_DynamicCast_AsBP_Structure_Composite_Base, bool K2Node_DynamicCast_bSuccess, class UStructureReverbComponent* CallFunc_GetReverbComponent_ReturnValue, TArray<struct FVector>& CallFunc_GetInteriorToExteriorAcousticOpeningPositions_Positions_1);
	void POILinkAllReverbs(bool CallFunc_IsDedicatedServer_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void MoveRainEmitterToClosestOpening(const struct FVector& ClosestPoint, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue);
	void StopOpeningPerPrecipitation(class UAkAudioEvent* StopEvent, bool& ActiveBool, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HandlePrecipitationEvents(double PrecipitationAmount, bool& ActiveBool, class UAkAudioEvent* StartEvent, class UAkAudioEvent* StopEvent, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_GetBiomeAudioSwitch_Success, class UAkSwitchValue* CallFunc_GetBiomeAudioSwitch_Switch, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_PostAkEventScoped_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue);
	void GetPrecipitationAmount(const class FString& NiagaraParam, double* Amount, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatParameter_ReturnValue, double K2Node_FunctionResult_Amount_ImplicitCast);
	void SetLocalPlayerShelterRTPC(double Shelter, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
	void UpdateRainPositions(const TArray<struct FVector>& SortedPositions, double HailAmount, double RainAmount, const struct FVector& CallFunc_Array_Get_Item, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms, class UScopedAkComponent* CallFunc_Spawn_External_Scoped_Ak_Component_Scoped_Ak_Component, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FVector>& CallFunc_SortByDistanceToTargetVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetPrecipitationAmount_Amount, double CallFunc_GetPrecipitationAmount_Amount_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void StopAmb2D(FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue);
	void HandleAmb2D(double Shelter, class UAkComponent* AmbienceManager_Ak2D, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UAkComponent* CallFunc_GetAk2DComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
	void Stop_Opening_Precipitation_Audio();
	void UpdateRTPC_PerPrecipitation(class UAkRtpc* Rtpc, double PrecipitationAmount, class UAkRtpc* TreeStandardDensityInner, float CallFunc_GetTreeStandardDensityInner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void SetPerPlayerRTPC(class ABP_Character_C* BP_Character, double Shelter, class UAkComponent* Weapon_Ak_Component, class UAkComponent* CallFunc_GetPlayerWeaponAkComponent_WeaponAkComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void Apply_Shelter(double Shelter, class UAkComponent* Wind_One_Shot_Ak_Component, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void LocalPlayerExited(class AActor* Actor, bool* ExitedToExterior, bool* IsLocalPlayer, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue);
	void AnyPlayerExited(class ABP_Character_C* BP_Character, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UAkComponent* CallFunc_GetPlayerWeaponAkComponent_WeaponAkComponent, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsComponentTickEnabled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue);
	void HandleOpenings(class ABP_Character_C* BP_Character, class UAcousticOpeningComponent* Acoustic_Opening, double Shelter, const struct FVector& CallFunc_Vector_Up_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_CalculateWeatherShelter_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double K2Node_VariableSet_Shelter_ImplicitCast);
	void LocalPlayerEntered(class AActor* Actor, const struct FStructureReverbVolume& Reverb_Volume, bool* EnteredFromExterior, bool* IsLocalPlayer, bool LocalPlayerInitiallyInside, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, class UBP_Ambience_Manager_C* K2Node_DynamicCast_AsBP_Ambience_Manager, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, double K2Node_VariableSet_Enclosedness_ImplicitCast, double K2Node_VariableSet_CeilingCover_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void GetPlayerWeaponAkComponent(class ABP_Character_C* BP_Character, class UAkComponent** WeaponAkComponent, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, bool CallFunc_IsLocallyControlled_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem, bool CallFunc_IsValid_ReturnValue);
	void AnyPlayerEntered(class ABP_Character_C* BP_Character, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsComponentTickEnabled_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void BPCharacterSpawnEvent(class AActor* Actor, class UAkStateValue* MusicState, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlayerExited(class AActor* Actor, const struct FStructureReverbVolume& ReverbVolume, bool* ExitedToExterior, bool* IsLocalPlayer, bool CallFunc_LocalPlayerExited_ExitedToExterior, bool CallFunc_LocalPlayerExited_IsLocalPlayer, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PlayerEntered(class AActor* Actor, const struct FStructureReverbVolume& ReverbVolume, bool* EnteredFromExterior, bool* IsLocalPlayer, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_LocalPlayerEntered_EnteredFromExterior, bool CallFunc_LocalPlayerEntered_IsLocalPlayer, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BP_StructureComposite_Completed();
	void AcousticOpeningsUpdated();
	void ExecuteUbergraph_BP_Acoustic_Volume_Manager(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_Character_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_StructureComposite_Base_C* K2Node_DynamicCast_AsBP_Structure_Composite_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
};

}


