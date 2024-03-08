#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F8 (0x538 - 0x340)
// WidgetBlueprintGeneratedClass WBP_PlayerMap_MapContents.WBP_PlayerMap_MapContents_C
class UWBP_PlayerMap_MapContents_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_maptexture;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ResiteBG;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ResiteBG_1;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MapContentsOverlay;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MapPinsOverlay;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OrientationOverlay;                                // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PartyMemberOverlay;                                // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PlayerMapTrail;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RespitePointArt;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RespointPoint;                                     // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_ART_MapTexture;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WaypointMarkerOverlay;                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WaypointMarkerOverlay_PartyMembers;                // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapUI_PlayerMarker_C*             WBP_MapUI_PlayerMarker;                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerMap_Grid_C*                 WBP_PlayerMap_Grid;                                // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerMapTrail_C*                 WBP_PlayerMapTrail;                                // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmMarble_C*                 WBP_sw_RealmMarble;                                // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_PlayerMarker;                                  // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Player_Old_Position;                               // 0x3D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Map_Size;                                          // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MapFocusLost;                                      // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<struct FGuid, class UObject*>           Waypoint_Widget_Reference;                         // 0x410(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGuid, class UWBP_PlayerMapPin_C*> MapPinWidgets;                                     // 0x460(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         RmbDown_AddWaypoint;                               // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PartyMemberMarkerSize;                             // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_MapUI_PlayerMarker_C*>     PartyMemberMarkers;                                // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       CurrentZoom;                                       // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LastRotation;                                      // 0x4E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMinimap;                                         // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_7125[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ManualMarkerLocation;                              // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarkerTray_C*                  MapMarkerTray;                                     // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture_HeightMap;                                 // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture_RPW;                                       // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture_RTH;                                       // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_MapMaterial;                                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerMap_MapContents_C* GetDefaultObj();

	void AddMapPinViaGamepad(const struct FVector2D& MarkerPositionOnMap, class UWBP_MapMarkerTray_C* MarkerTrayRef, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetupBindings();
	void RefreshRespite(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, const struct FPlayerSpawnContextData& CallFunc_GetRespiteData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetupDMIMap(const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_OutRealmSettings, bool CallFunc_GetCurrentRealmSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void PlayerMoving_MapVisibility(bool PlayerIsMoving, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, float K2Node_Select_Default);
	void SetMapFromTableTexture(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FS_UI_MapTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void Bind_to_Map_Pin_Events(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void HandleRespiteDataUpdated(struct FPlayerSpawnContextData& NewRespiteData, const class FString& OwningPlayerId, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void PlaceMarkerOnMap(const struct FDataTableRowHandle& MapMarker, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FVector& CallFunc_Convert_Map_Position_To_World_Location_WorldLocation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_AddPlayerOwnedMapPin_self_CastInput);
	void CreateMapPinWidget(const struct FMapPinData& MapPinData, class UWBP_PlayerMapPin_C** NewMapPinWidget, class UClass* WidgetClassToCreate, class UWBP_PlayerMapPin_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position, class UClass* K2Node_ClassDynamicCast_AsWBP_Player_Map_Pin, bool K2Node_ClassDynamicCast_bSuccess, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void HandleMapPinDataRemoved(struct FGuid& MapPinId, const class FString& CallFunc_Conv_GuidToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UWBP_PlayerMapPin_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void HandleMapPinDataAdded(struct FMapPinData& MapPinData, class UWBP_PlayerMapPin_C* CallFunc_CreateMapPinWidget_NewMapPinWidget);
	void ClientPredict_UpdateRespitePoint(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnInputContext(int32 ContextIndex, const struct FEventReply& CallFunc_OnInputContext_ReturnValue);
	void HandleMapPinDataUpdated(struct FMapPinData& MapPinData, class UWBP_PlayerMapPin_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Flush_All_Trays(bool CallFunc_IsValid_ReturnValue);
	void Map_UI_Add_Map_Pin_Via_Click(const struct FVector2D& MapPosition, class UWBP_MapMarkerTray_C* MarkerTrayRef, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UWBP_MapMarkerTray_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Setup_Bindings_Waypoints(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetupBindings_Party(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent);
	void Input_PartyMember_Hovered(class FText Header, class FText Subheader, class FText Body, bool Hovered);
	void SetupPartyMemberMarkers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, TArray<struct FS_MapPartyMemberInfo>& CallFunc_GetPartyMemberMapInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_MapPartyMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_MapUI_PlayerMarker_C* CallFunc_AddPartyMemberMarker_MarkerWidget, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void ClearPartyMemberMarkers();
	void AddPartyMemberMarker(const class FString& PlayerName, int32 Index, class UWBP_MapUI_PlayerMarker_C** MarkerWidget, class UWBP_MapUI_PlayerMarker_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_2, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Input_MapPin_Select(const struct FMapPinData& MapPinData, class UBP_PlayerMap_Temp_TransitionComponent_C* CallFunc_GetPlayerMapComponent_OutputPin, TScriptInterface<class ILocationTrackerInterface> K2Node_DynamicCast_AsLocation_Tracker_Interface, bool K2Node_DynamicCast_bSuccess);
	void Input_MapPin_Hovered(const struct FMapPinData& MapPinData, bool IsHovered);
	void Input_Hovered_WaypointMarker(class FText Header, class FText Subheader, class FText Body, bool Hovered);
	void Update_MapPins(const struct FMapPinData& MapPinData, class UWBP_PlayerMapPin_C* NewMapPinWidget, const class FString& Level_Name_LOCAL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TScriptInterface<class IPlayerLocationsInterface> CallFunc_GetAllMapPins_self_CastInput, TArray<struct FMapPinData>& CallFunc_GetAllMapPins_ReturnValue, const struct FMapPinData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PlayerMapPin_C* CallFunc_CreateMapPinWidget_NewMapPinWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void SetupMapTexture(class UMapTextureSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetMapLayerTexture_ReturnValue, class UTexture2D* CallFunc_GetMapLayerTexture_ReturnValue_1, class UTexture2D* CallFunc_GetMapLayerTexture_ReturnValue_2, bool CallFunc_HasValidLayerTextures_ReturnValue);
	void Update_PartyMemberMarkers(class UWBP_MapUI_PlayerMarker_C* Local_PartyMemberWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, TArray<struct FS_MapPartyMemberInfo>& CallFunc_GetPartyMemberMapInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_MapPartyMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UWBP_MapUI_PlayerMarker_C* CallFunc_Array_Get_Item_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position);
	bool DidLocalPlayerChangePosition(double Delta_Position, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_Abs_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_2, bool CallFunc_IsValid_ReturnValue);
	void SetupPlayerMarkerDMI(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	double Get_Players_Marker_Rotation__0Minus1_(bool Temp_bool_Variable, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double K2Node_Select_Default, double CallFunc_Percent_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	void Update_PlayerMarker(class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetLocalPlayerLocation_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void UpdateMarkerData(const struct FGuid& Guid, double AreaRadius, class FText Note);
	void Destruct();
	void OnNewMarkerEditTrayOpened();
	void ExecuteUbergraph_WBP_PlayerMap_MapContents(int32 EntryPoint, double Temp_real_Variable, bool CallFunc_DidLocalPlayerChangePosition_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double Temp_real_Variable_1, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsMoving_IsMoving, const struct FFocusEvent& K2Node_Event_InFocusEvent, double CallFunc_Get_Players_Marker_Rotation__0_1__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_2, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, const struct FGuid& K2Node_CustomEvent_Guid, double K2Node_CustomEvent_AreaRadius, class FText K2Node_CustomEvent_Note, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UBP_PlayerMap_Temp_TransitionComponent_C* CallFunc_GetPlayerMapComponent_OutputPin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, double K2Node_Select_Default, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void MapFocusLost__DelegateSignature();
};

}


