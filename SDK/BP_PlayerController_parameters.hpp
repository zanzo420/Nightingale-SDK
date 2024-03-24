#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetBuildModeFeedbackComponent
struct ABP_PlayerController_C_GetBuildModeFeedbackComponent_Params
{
public:
	class UBP_BuildModeFeedbackComponent_C*      Component;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetWeakpointComponent
struct ABP_PlayerController_C_GetWeakpointComponent_Params
{
public:
	bool                                         HasInterface;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_84FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_WeakPoint_C>     Interface;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetPingInterface
struct ABP_PlayerController_C_GetPingInterface_Params
{
public:
	bool                                         bHasInterface;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_84FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Ping_C>          PingInterface;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.IsCardNotificationQueueEmpty
struct ABP_PlayerController_C_IsCardNotificationQueueEmpty_Params
{
public:
	bool                                         bIsEmpty;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.StoreEnded
struct ABP_PlayerController_C_StoreEnded_Params
{
public:
	TScriptInterface<class IShopInteractionModel> ShopInteractionSession;                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.StoreStarted
struct ABP_PlayerController_C_StoreStarted_Params
{
public:
	TScriptInterface<class IShopInteractionModel> ShopInteractionSession;                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInteractionSelectedFromMenu
struct ABP_PlayerController_C_OnInteractionSelectedFromMenu_Params
{
public:
	struct FGuid                                 InteractionAssetUID;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HandleArachnophobiaGlobalEmitterVariable
struct ABP_PlayerController_C_HandleArachnophobiaGlobalEmitterVariable_Params
{
public:
	bool                                         IsArachnophobiaModeOn;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.On Conversation End
struct ABP_PlayerController_C_On_Conversation_End_Params
{
public:
	struct FGuid                                 ConversationInstanceId;                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnConversationStarted
struct ABP_PlayerController_C_OnConversationStarted_Params
{
public:
	struct FGuid                                 ConversationInstanceId;                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ShowMovieUntilPortalDeployment
struct ABP_PlayerController_C_ShowMovieUntilPortalDeployment_Params
{
public:
	class FString                                MovieMediaSourceURL;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UNWXLoadingScreenMoviePlayerWidget*    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_LoadingScreenMoviePlayer_C*       CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ArachnophobiaModeSet
struct ABP_PlayerController_C_ArachnophobiaModeSet_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_84FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_84FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureBase_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ReferenceParm)
	class ABP_CreatureBase_C*                    CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_84FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.FlushHeldActionsOnEnterUIMode
struct ABP_PlayerController_C_FlushHeldActionsOnEnterUIMode_Params
{
public:
	class UBP_ActionComponent_C*                 ActionComponent;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PlayerPawn;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionTypes                 CurentInputAction;                                 // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8500[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8501[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8502[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EInputActionTypes>         CallFunc_Map_Keys_Keys;                            // 0x38(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionTypes                 CallFunc_Array_Get_Item;                           // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value;                           // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInputModeChanged
struct ABP_PlayerController_C_OnInputModeChanged_Params
{
public:
	bool                                         UIMode;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputContext                     InputContext;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8503[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8504[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputContext                     CallFunc_GetInputContext_ReturnValue;              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.RunGraphicsCommandWorkarounds
struct ABP_PlayerController_C_RunGraphicsCommandWorkarounds_Params
{
public:
	TArray<class FString>                        Commands;                                          // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8505[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x281 (0x281 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.PopulateHintFromInteraction
struct ABP_PlayerController_C_PopulateHintFromInteraction_Params
{
public:
	struct FInteractionData                      Interaction;                                       // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FInteractionUIContext                 InteractionUIContext;                              // 0x178(0x78)(Edit, BlueprintVisible)
	class UObject*                               InteractableObject;                                // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  MultipleOptionsSubtext;                            // 0x1F8(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8506[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x218(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8507[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Interactable_C>  K2Node_DynamicCast_AsBPI_Interactable;             // 0x230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetInteractableObjectFromInteractionData_ReturnValue; // 0x248(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetInteractText_InteractText;             // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x260(0x18)(None)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions; // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x401 (0x401 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Ability2Held
struct ABP_PlayerController_C_Ability2Held_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         L_LocalPlayer;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8509[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IRadialMenuInterface>> RadialMenuEntries;                                 // 0x10(0x10)(Edit, BlueprintVisible)
	class AEquippableItem*                       EquippedRangedWeapon;                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_RangedWeapon_Base_C*               K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_850A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_850B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_850C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                          CallFunc_GetActiveKeysFromInputAction_OutKeys;     // 0x78(0x10)(ReferenceParm)
	uint8                                        Pad_850D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0x90(0x2F0)(ConstParm)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x380(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_850E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IRadialMenuInterface>> CallFunc_GenerateSpellRadialMenuEntriesForWeapon_OutRadialMenuEntries; // 0x388(0x10)(ReferenceParm)
	bool                                         CallFunc_GenerateSpellRadialMenuEntriesForWeapon_ReturnValue; // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_850F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_SelectClass_ReturnValue;                  // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget;  // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_RadialMenuWidget_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x3B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryComponent_C*              CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent; // 0x3C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_WeaponUser_C>    K2Node_DynamicCast_AsBPI_Weapon_User;              // 0x3D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8511[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedRangedWeapon_EquippedItem;     // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class IRadialMenuInterface>> CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries; // 0x3F0(0x10)(ReferenceParm)
	bool                                         CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue; // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Ability1Held
struct ABP_PlayerController_C_Ability1Held_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         L_LocalPlayer;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8512[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IRadialMenuInterface>> RadialMenuEntries;                                 // 0x10(0x10)(Edit, BlueprintVisible)
	class AEquippableItem*                       EquippedRangedWeapon;                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_RangedWeapon_Base_C*               K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8513[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8514[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x48(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8515[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          CallFunc_GetActiveKeysFromInputAction_OutKeys;     // 0x50(0x10)(ReferenceParm)
	class UClass*                                CallFunc_SelectClass_ReturnValue;                  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsWBP_Radial_Menu_Widget;  // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8516[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_WeaponUser_C>    K2Node_DynamicCast_AsBPI_Weapon_User;              // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8517[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_RadialMenuWidget_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       CallFunc_GetEquippedRangedWeapon_EquippedItem;     // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryComponent_C*              CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent; // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class IRadialMenuInterface>> CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_OutRadialMenuEntries; // 0xB0(0x10)(ReferenceParm)
	bool                                         CallFunc_GenerateAmmoRadialMenuEntriesForWeapon_ReturnValue; // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Is Player Not Swinging Weapon
struct ABP_PlayerController_C_Is_Player_Not_Swinging_Weapon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8518[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8519[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x211 (0x211 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.InteractHeld
struct ABP_PlayerController_C_InteractHeld_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_851B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_RadialMenuWidget_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                          CallFunc_GetActiveKeysFromInputAction_OutKeys;     // 0x20(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXCommonHUD*                         CallFunc_GetNWXCommonHUD_ReturnValue;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TraceForTargetToInteract_Success;         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_851C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionData                      CallFunc_TraceForTargetToInteract_InteractionData; // 0x50(0x178)(ContainsInstancedReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue; // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_851D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions; // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_851E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNWXInteractionOption>         CallFunc_GetInteractionOptions_InteractionOptions; // 0x1E8(0x10)(ReferenceParm)
	TArray<TScriptInterface<class IRadialMenuInterface>> CallFunc_GenerateRadialMenuEntriesFromInteractions_OutRadialMenuEntries; // 0x1F8(0x10)(ReferenceParm)
	class UBP_UIMenusComponent_C*                CallFunc_GetLocalPlayerMenusComponent_MenusComponent; // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetMenusComponent
struct ABP_PlayerController_C_GetMenusComponent_Params
{
public:
	class UMenusComponent*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_UIMenusComponent_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetContainerFromProvider
struct ABP_PlayerController_C_GetContainerFromProvider_Params
{
public:
	struct FItemContainerHandle                  ContainerHandle;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	TScriptInterface<class IItemContainer>       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainerProvider> CallFunc_GetContainerFromProvider_self_CastInput;  // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetContainerFromProvider_ReturnValue;     // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HasContainer
struct ABP_PlayerController_C_HasContainer_Params
{
public:
	TScriptInterface<class IItemContainer>       Container;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8522[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainerProvider> CallFunc_HasContainer_self_CastInput;              // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasContainer_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HasContainerFromHandle
struct ABP_PlayerController_C_HasContainerFromHandle_Params
{
public:
	struct FItemContainerHandle                  ContainerHandle;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8524[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainerProvider> CallFunc_HasContainerFromHandle_self_CastInput;    // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasContainerFromHandle_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetDefaultContainer
struct ABP_PlayerController_C_GetDefaultContainer_Params
{
public:
	TScriptInterface<class IItemContainer>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IItemContainerProvider> CallFunc_GetDefaultContainer_self_CastInput;       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_GetDefaultContainer_ReturnValue;          // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInitialInventoryReceived
struct ABP_PlayerController_C_OnInitialInventoryReceived_Params
{
public:
	class UBasicAwaiter*                         CallFunc_GetInventoryAwaiter_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x174 (0x174 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnServerEnterCharacterCraftingStation
struct ABP_PlayerController_C_OnServerEnterCharacterCraftingStation_Params
{
public:
	struct FCraftingRecipeReference              SelectedRecipe;                                    // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTag                          EnterStationTag;                                   // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue; // 0x78(0x20)(None)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0xA0(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ToggleCombatLog
struct ABP_PlayerController_C_ToggleCombatLog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8527[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Debug_CombatLog_C*                CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ToggleCombatLog_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnRep_CombatLogEntries
struct ABP_PlayerController_C_OnRep_CombatLogEntries_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.IsActionInputPressed
struct ABP_PlayerController_C_IsActionInputPressed_Params
{
public:
	enum class EInputActionTypes                 Action_Input_Type;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Pressed;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value;                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SetActionInputState
struct ABP_PlayerController_C_SetActionInputState_Params
{
public:
	enum class EInputActionTypes                 Input_Action_Type;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pressed;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.AFKKickTimerFinished
struct ABP_PlayerController_C_AFKKickTimerFinished_Params
{
public:
	bool                                         CallFunc_IsPlayInEditor_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.AFKTimerFinished
struct ABP_PlayerController_C_AFKTimerFinished_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.StartAFKTimer
struct ABP_PlayerController_C_StartAFKTimer_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_852C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ResetAFKTimer
struct ABP_PlayerController_C_ResetAFKTimer_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x699 (0x699 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ServerFastTravelToMapPinLocation
struct ABP_PlayerController_C_ServerFastTravelToMapPinLocation_Params
{
public:
	struct FMapPinData                           MapPinData;                                        // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn*                                 FastTravelPawn;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FastTravelRotation;                                // 0xB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               FastTravelPosition;                                // 0xD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0xE8(0x18)(None)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x110(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x160(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x178(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_1;          // 0x1C8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1E0(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x240(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x250(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x268(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x280(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_2;          // 0x2E0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x2F8(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_3;          // 0x348(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x360(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x3B0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x3C0(0x18)(None)
	bool                                         CallFunc_TeleportPawnToLocation_Result;            // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_852D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x3E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_4;          // 0x3F0(0x18)(None)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_5;          // 0x408(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x420(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x470(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue_2;        // 0x4C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x4D0(0x18)(None)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_6;          // 0x4E8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_8;            // 0x500(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_9;            // 0x550(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x5A0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x5B0(0x18)(None)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue_3;        // 0x5C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x5D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x5E8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_10;           // 0x600(0x50)(HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x650(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x658(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_852E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x670(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x688(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanPlayerFastTravel_FastTravelPermitted;  // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ClientFastTravelToMapPinLocation
struct ABP_PlayerController_C_ClientFastTravelToMapPinLocation_Params
{
public:
	struct FMapPinData                           MapPinData;                                        // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanPlayerFastTravel_FastTravelPermitted;  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_852F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xE0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x130(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x140(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.CanPlayerFastTravel
struct ABP_PlayerController_C_CanPlayerFastTravel_Params
{
public:
	bool                                         FastTravelPermitted;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8530[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8531[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            K2Node_DynamicCast_AsNWXAbility_System_Component;  // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyAbilityActive_bIsAnyAbilityActive;   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetMapTracker
struct ABP_PlayerController_C_GetMapTracker_Params
{
public:
	class UBP_MapTracker_C*                      MapTrackerComponent;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x36D (0x36D - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.TraceForTargetToInteract
struct ABP_PlayerController_C_TraceForTargetToInteract_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8534[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(Parm, OutParm, ContainsInstancedReference)
	class UPlayerInteractionComponent*           InteractionComponent;                              // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PlayerPawn;                                        // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x190(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8535[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerInteractionComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8537[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionData                      CallFunc_TraceForTargetDataForInteraction_OutInteractionData; // 0x1E0(0x178)(ContainsInstancedReference)
	bool                                         CallFunc_TraceForTargetDataForInteraction_ReturnValue; // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.EnableOptimizations
struct ABP_PlayerController_C_EnableOptimizations_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x311 (0x311 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInteractPressed
struct ABP_PlayerController_C_OnInteractPressed_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TraceForTargetToInteract_Success;         // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8539[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionData                      CallFunc_TraceForTargetToInteract_InteractionData; // 0x180(0x178)(ContainsInstancedReference)
	bool                                         CallFunc_Is_Player_Not_Swinging_Weapon_ReturnValue; // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_853A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXAICharacter*                       K2Node_DynamicCast_AsNWXAICharacter;               // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetEyeTransform
struct ABP_PlayerController_C_GetEyeTransform_Params
{
public:
	struct FTransform                            EyeTransform;                                      // 0x0(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x60(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ExecuteInteraction
struct ABP_PlayerController_C_ExecuteInteraction_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UPlayerInteractionComponent*           InteractionComponent;                              // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PlayerPawn;                                        // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_853B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerInteractionComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.AreTestsRunning
struct ABP_PlayerController_C_AreTestsRunning_Params
{
public:
	bool                                         AreTestsRunning;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x301 (0x301 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SetCreatureClassToSpawn
struct ABP_PlayerController_C_SetCreatureClassToSpawn_Params
{
public:
	class FString                                Selection;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AIEnabled;                                         // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_853C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UClass*>                          CreatureClasses;                                   // 0x18(0x50)(Edit, BlueprintVisible)
	class UClass*                                CreatureToSpawn;                                   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_853D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_853E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UClass*>                          K2Node_MakeSet_Set;                                // 0x90(0x50)(None)
	double                                       K2Node_Select_Default;                             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          K2Node_MakeSet_Set_1;                              // 0xE8(0x50)(None)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          K2Node_MakeSet_Set_2;                              // 0x158(0x50)(None)
	TSet<class UClass*>                          K2Node_MakeSet_Set_3;                              // 0x1A8(0x50)(None)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          K2Node_MakeSet_Set_4;                              // 0x200(0x50)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x250(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x268(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x280(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXCreatureManagerBase*               CallFunc_GetCreatureManager_CreatureManager;       // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureManager_C*                 K2Node_DynamicCast_AsBP_Creature_Manager;          // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x229 (0x229 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.RequestInteraction
struct ABP_PlayerController_C_RequestInteraction_Params
{
public:
	struct FInteractionData                      RequestedInteraction;                              // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_853F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8540[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNWXInteractionOption>         CallFunc_GetInteractionOptions_InteractionOptions; // 0x190(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8541[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXInteractionOption                 CallFunc_Array_Get_Item;                           // 0x1A8(0x70)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8542[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMultipleInteractionOptions_HasMultipleInteractions; // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E1 (0x1E1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.PrintActiveEffects
struct ABP_PlayerController_C_PrintActiveEffects_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8543[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectQuery                  K2Node_MakeStruct_GameplayEffectQuery;             // 0x10(0x188)(None)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8544[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_GetActiveEffects_ReturnValue;             // 0x1B0(0x10)(ReferenceParm)
	struct FActiveGameplayEffectHandle           CallFunc_Array_Get_Item;                           // 0x1C0(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8545[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetActiveGameplayEffectDebugString_ReturnValue; // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x488 (0x488 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Update Interact
struct ABP_PlayerController_C_Update_Interact_Params
{
public:
	class APawn*                                 PlayerPawn;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UPlayerInteractionComponent*           ControllingPawnInteractionComponent;               // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       PlayerCharacter;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x190(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8546[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x1B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager_1;            // 0x1C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInteractionUIContext                 K2Node_MakeStruct_InteractionUIContext;            // 0x1D0(0x78)(None)
	struct FInteractionUIContext                 K2Node_MakeStruct_InteractionUIContext_1;          // 0x248(0x78)(None)
	bool                                         CallFunc_IsInAnyDeathState_ReturnValue;            // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8547[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerInteractionComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8548[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8549[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_854A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      CallFunc_TraceForTargetDataForInteractionDisplay_OutInteractionData; // 0x308(0x178)(ContainsInstancedReference)
	bool                                         CallFunc_TraceForTargetDataForInteractionDisplay_ReturnValue; // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_854B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x53 (0x53 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.AttemptReadyConnection
struct ABP_PlayerController_C_AttemptReadyConnection_Params
{
public:
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_854C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXCharacter*                         K2Node_DynamicCast_AsNWXCharacter;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_854D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       K2Node_DynamicCast_AsBP_Game_State;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_854E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD_CommonNWX_C*                      K2Node_DynamicCast_AsHUD_Common_NWX;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GateReadyConnection
struct ABP_PlayerController_C_GateReadyConnection_Params
{
public:
	bool                                         SetGateOpen;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetPlayerControllerByPlayerName
struct ABP_PlayerController_C_GetPlayerControllerByPlayerName_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                PlayerController;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                LocalPlayerController;                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          CallFunc_GetPlayerStateByPlayerName_Player_State;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_854F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GetPlayerStateByPlayerName
struct ABP_PlayerController_C_GetPlayerStateByPlayerName_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         OnlineOnly;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8550[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          Player_State;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          LocalPlayerState;                                  // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8551[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8552[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8553[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SimulatePlayerMovement
struct ABP_PlayerController_C_SimulatePlayerMovement_Params
{
public:
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_InputAction_DB_ToggleSimulatePlayerMovement_K2Node_EnhancedInputActionEvent_0
struct ABP_PlayerController_C_InpActEvt_InputAction_DB_ToggleSimulatePlayerMovement_K2Node_EnhancedInputActionEvent_0_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayHUD
struct ABP_PlayerController_C_DisplayHUD_Params
{
public:
	bool                                         ShowingHUD;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.CreateMarker
struct ABP_PlayerController_C_CreateMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            PlayerCharacter;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      PlayerCamera;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IconDistance;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Row;                                               // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.RemoveMarker
struct ABP_PlayerController_C_RemoveMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.UpdateMarker
struct ABP_PlayerController_C_UpdateMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MarkerPrecision;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ParticlesVisible;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8554[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ParticlesColor;                                    // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayCompass
struct ABP_PlayerController_C_DisplayCompass_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayFX;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayQuestNotification
struct ABP_PlayerController_C_DisplayQuestNotification_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_QuestNotificatorInfo               Quest_Notificator_Info;                            // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         DisplayToolTip;                                    // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ToolTipIcon;                                       // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  ToolTipText;                                       // 0xB8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ToolTipOnly;                                       // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayIngameTutorial
struct ABP_PlayerController_C_DisplayIngameTutorial_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row1;                                              // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row2;                                              // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayCrosshair
struct ABP_PlayerController_C_DisplayCrosshair_Params
{
public:
	enum class E_CrosshairTypes                  Crosshair_Type;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CrosshairVisibility;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8556[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Crosshair_Color;                                   // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitIndicatorTypes               HitIndicator_Type;                                 // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitIndicatorVisibility;                            // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayHitIndicator
struct ABP_PlayerController_C_DisplayHitIndicator_Params
{
public:
	double                                       IndicatorTime;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IndicatorColor;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitType                         Hit_Type;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayRecoil
struct ABP_PlayerController_C_DisplayRecoil_Params
{
public:
	bool                                         IsRecoil;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayBigLootNotification
struct ABP_PlayerController_C_DisplayBigLootNotification_Params
{
public:
	struct FS_BigLootNotificationInfo            Big_Loot_Notify_Info;                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayToolTip
struct ABP_PlayerController_C_DisplayToolTip_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row1;                                              // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row2;                                              // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayGlobalNotification
struct ABP_PlayerController_C_DisplayGlobalNotification_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TypeText;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  HeadlineText;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.CrosshairVisibility
struct ABP_PlayerController_C_CrosshairVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_Message_SendToServer
struct ABP_PlayerController_C_Chat_Message_SendToServer_Params
{
public:
	class FString                                ChatMessage;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_Message_ReceiveFromServer
struct ABP_PlayerController_C_Chat_Message_ReceiveFromServer_Params
{
public:
	struct FS_ChatMessage                        ChatMessageS;                                      // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_LeaveChannel
struct ABP_PlayerController_C_Chat_LeaveChannel_Params
{
public:
	int32                                        ChannelID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_JoinChannel
struct ABP_PlayerController_C_Chat_JoinChannel_Params
{
public:
	int32                                        ChannelID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_PM_SendToServer
struct ABP_PlayerController_C_Chat_PM_SendToServer_Params
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8557[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_PM_ReceiveFromServer
struct ABP_PlayerController_C_Chat_PM_ReceiveFromServer_Params
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8558[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_SetStatus
struct ABP_PlayerController_C_Chat_SetStatus_Params
{
public:
	bool                                         Away;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_ServerCommand
struct ABP_PlayerController_C_Chat_ServerCommand_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_Yell_SendToServer
struct ABP_PlayerController_C_Chat_Yell_SendToServer_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Chat_Yell_ReceiveFromServer
struct ABP_PlayerController_C_Chat_Yell_ReceiveFromServer_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Crosshair_ShowReloadText
struct ABP_PlayerController_C_Crosshair_ShowReloadText_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Crosshair_UpdateReload
struct ABP_PlayerController_C_Crosshair_UpdateReload_Params
{
public:
	double                                       Time;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ShowSpyglass
struct ABP_PlayerController_C_ShowSpyglass_Params
{
public:
	bool                                         Show_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_UpdateInteractText
struct ABP_PlayerController_C_HUD_UpdateInteractText_Params
{
public:
	struct FInteractionUIContext                 InteractionContext;                                // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_DisplayApexCreature_BossBar
struct ABP_PlayerController_C_HUD_DisplayApexCreature_BossBar_Params
{
public:
	bool                                         Display_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_UpdateBossBar
struct ABP_PlayerController_C_HUD_UpdateBossBar_Params
{
public:
	class FString                                Bar_Label;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Whatever_;                                         // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Health;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Bar_Header;                                        // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_AddNewBossBar
struct ABP_PlayerController_C_HUD_AddNewBossBar_Params
{
public:
	struct FLinearColor                          Progress_Bar_Tint;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              Progress_Bar_Direction;                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8559[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Bar_Label;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Bar_Header;                                        // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Bar_Sub_Header;                                    // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_RemoveBossBar
struct ABP_PlayerController_C_HUD_RemoveBossBar_Params
{
public:
	class FString                                Label;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_Damage_CreateIndicator
struct ABP_PlayerController_C_HUD_Damage_CreateIndicator_Params
{
public:
	struct FDamageEffectContextData              DamageContextData;                                 // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Time_to_Display;                                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Damage_Intensity__Amount_;                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_UpdateActionProgressBar
struct ABP_PlayerController_C_HUD_UpdateActionProgressBar_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_855C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentProgress;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShowImage;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_855D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_ChangeHudMode
struct ABP_PlayerController_C_HUD_ChangeHudMode_Params
{
public:
	enum class E_UI_HUD_Modes                    HUD_Mode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayEncounterUpdate
struct ABP_PlayerController_C_DisplayEncounterUpdate_Params
{
public:
	TScriptInterface<class IEncounterUIDataInterface> EncounterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                EncounterMessage;                                  // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_SetRealmStartTime
struct ABP_PlayerController_C_HUD_SetRealmStartTime_Params
{
public:
	double                                       RealmStartTime;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Crosshair_UpdateWeaponSpread
struct ABP_PlayerController_C_Crosshair_UpdateWeaponSpread_Params
{
public:
	double                                       Spread;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ShowContextualControls
struct ABP_PlayerController_C_ShowContextualControls_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ContextualControlsData             ContextualControlsData;                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_Encounter_MiniMessage_Timed
struct ABP_PlayerController_C_HUD_Encounter_MiniMessage_Timed_Params
{
public:
	struct FNotificationEncounter                Message_Content;                                   // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       TimeToDisplay;                                     // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_Encounter_MiniMessage_Pinned
struct ABP_PlayerController_C_HUD_Encounter_MiniMessage_Pinned_Params
{
public:
	struct FNotificationEncounter                MessageContent;                                    // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Pin_or_Unpin__Pin_true_will_add_;                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_GeneralNotification
struct ABP_PlayerController_C_HUD_GeneralNotification_Params
{
public:
	struct FS_UpdaterNotificatorInfo             Content;                                           // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Remove_Manually;                                   // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_855F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Time_to_Display;                                   // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.HUD_StatusEffect_TextNotificationUpdate
struct ABP_PlayerController_C_HUD_StatusEffect_TextNotificationUpdate_Params
{
public:
	bool                                         ManuallyRemove_;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeToDisplay;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             Content;                                           // 0x10(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.UI_VFX_CraftingSuccess
struct ABP_PlayerController_C_UI_VFX_CraftingSuccess_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.DisplayErrorNotification
struct ABP_PlayerController_C_DisplayErrorNotification_Params
{
public:
	class FText                                  MainText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.FadeToBlack_andBack
struct ABP_PlayerController_C_FadeToBlack_andBack_Params
{
public:
	double                                       TimeToStayBlack;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.FadeToBlack_Manual
struct ABP_PlayerController_C_FadeToBlack_Manual_Params
{
public:
	bool                                         To_Black_true__From_Black__False;                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_Invalid_Intersecting
struct ABP_PlayerController_C_BuildUX_Feedback_Invalid_Intersecting_Params
{
public:
	struct FStructurePlacementFeedback_Collision Feedback;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_Invalid
struct ABP_PlayerController_C_BuildUX_Feedback_Invalid_Params
{
public:
	struct FStructurePlacementFeedback           Feedback;                                          // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_RotationControls
struct ABP_PlayerController_C_BuildUX_Feedback_RotationControls_Params
{
public:
	bool                                         CanRotate;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8564[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentRotation;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.BuildUX_Feedback_HeightControls
struct ABP_PlayerController_C_BuildUX_Feedback_HeightControls_Params
{
public:
	bool                                         CanAdjustHeight;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8567[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Height_Current;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Height_Max;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Height_Min;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SendInteractionToLocalClient
struct ABP_PlayerController_C_SendInteractionToLocalClient_Params
{
public:
	TScriptInterface<class IBPI_ControllerClientInteractable_C> InteractionObject;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Client_LocalControllerInteract
struct ABP_PlayerController_C_Client_LocalControllerInteract_Params
{
public:
	class UObject*                               InteractionObject;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ExecuteAbilityOnTarget
struct ABP_PlayerController_C_ExecuteAbilityOnTarget_Params
{
public:
	enum class EInputActionTypes                 InputActionType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInteractButtonHeldDown
struct ABP_PlayerController_C_OnInteractButtonHeldDown_Params
{
public:
	class UInputAction*                          Input_Action;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ReleaseInputOnTarget
struct ABP_PlayerController_C_ReleaseInputOnTarget_Params
{
public:
	enum class EInputActionTypes                 ReleaseActionType;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SetBuildModeFeedbackMode
struct ABP_PlayerController_C_SetBuildModeFeedbackMode_Params
{
public:
	enum class EBuildModeContext                 Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SetBuildModeFeedbackActionEnabled
struct ABP_PlayerController_C_SetBuildModeFeedbackActionEnabled_Params
{
public:
	enum class EBuildModeAction                  Action;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ReceivePossess
struct ABP_PlayerController_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ServerDebugSetTimeOfDay
struct ABP_PlayerController_C_ServerDebugSetTimeOfDay_Params
{
public:
	int32                                        Hour;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Min;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ClientDebugSetTimeOfDay
struct ABP_PlayerController_C_ClientDebugSetTimeOfDay_Params
{
public:
	int32                                        Hour;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Min;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.UI_DB_SpawnCreature
struct ABP_PlayerController_C_UI_DB_SpawnCreature_Params
{
public:
	class FString                                CreatureToSpawn;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        HowMany_;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stationary_;                                       // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Immortal_;                                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Debug_MoveCharacter
struct ABP_PlayerController_C_Debug_MoveCharacter_Params
{
public:
	struct FVector                               DestLocation;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.GrantLoadout
struct ABP_PlayerController_C_GrantLoadout_Params
{
public:
	struct FPlayerLoadoutDataReference           Loadout;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.CustomEvent
struct ABP_PlayerController_C_CustomEvent_Params
{
public:
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstance;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   QueryStatus;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ShowGeneralNotification
struct ABP_PlayerController_C_ShowGeneralNotification_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Duration;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ShowErrorNotification
struct ABP_PlayerController_C_ShowErrorNotification_Params
{
public:
	class FText                                  MainText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.AddUI_FromWorldInteraction
struct ABP_PlayerController_C_AddUI_FromWorldInteraction_Params
{
public:
	TSubclassOf<class UNWXCommonWindowWidget>    WidgetToOpen;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
struct ABP_PlayerController_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.TeleportPlayer
struct ABP_PlayerController_C_TeleportPlayer_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnBindReadyEvent
struct ABP_PlayerController_C_OnBindReadyEvent_Params
{
public:
	class ABP_GameState_C*                       GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnLoadoutComponentReady
struct ABP_PlayerController_C_OnLoadoutComponentReady_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Client_FastTravelToMapPinLocation
struct ABP_PlayerController_C_Client_FastTravelToMapPinLocation_Params
{
public:
	struct FMapPinData                           MapPinData;                                        // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.Server Fast Travel to Map Pin Location
struct ABP_PlayerController_C_Server_Fast_Travel_to_Map_Pin_Location_Params
{
public:
	struct FMapPinData                           MapPinData;                                        // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.SetBuildingFeedbackMode
struct ABP_PlayerController_C_SetBuildingFeedbackMode_Params
{
public:
	enum class EBuildModeContext                 Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1720 (0x1720 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
struct ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bVisible;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_ChatMessage;                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_ChatMessage                        K2Node_Event_ChatMessageS;                         // 0x18(0x20)(HasGetValueTypeHash)
	int32                                        K2Node_Event_ChannelID_1;                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_ChannelID;                            // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PlayerID_1;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Message_4;                            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PlayerID;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Message_3;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Away;                                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Message_2;                            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_Message_1;                            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_Message;                              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Show;                                 // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Time;                                 // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Show_;                                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_857F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionUIContext                 K2Node_Event_InteractionContext;                   // 0xC0(0x78)(ConstParm)
	bool                                         K2Node_Event_Display_;                             // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8580[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Bar_Label_1;                          // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_; // 0x150(0x18)(None)
	double                                       K2Node_Event_Health;                               // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Bar_Header_1;                         // 0x170(0x18)(None)
	struct FLinearColor                          K2Node_Event_Progress_Bar_Tint;                    // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              K2Node_Event_Progress_Bar_Direction;               // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8581[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Bar_Label;                            // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Bar_Header;                           // 0x1B0(0x18)(None)
	class FText                                  K2Node_Event_Bar_Sub_Header;                       // 0x1C8(0x18)(None)
	class FString                                K2Node_Event_Label_1;                              // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDamageEffectContextData              K2Node_Event_DamageContextData;                    // 0x1F0(0x30)(None)
	double                                       K2Node_Event_Time_to_Display_1;                    // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Damage_Intensity__Amount_;            // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Colour;                               // 0x230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Visible;                              // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8582[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_CurrentProgress;                      // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Label;                                // 0x250(0x18)(None)
	bool                                         K2Node_Event_ShowImage;                            // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8583[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_Event_Image;                                // 0x270(0x28)(HasGetValueTypeHash)
	enum class E_UI_HUD_Modes                    K2Node_Event_HUD_Mode;                             // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8584[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData;                        // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                K2Node_Event_EncounterMessage;                     // 0x2B0(0x60)(None)
	double                                       K2Node_Event_RealmStartTime;                       // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Spread;                               // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsVisible;                            // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ContextualControlsData             K2Node_Event_ContextualControlsData;               // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8585[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationEncounter                K2Node_Event_Message_Content;                      // 0x328(0x60)(None)
	double                                       K2Node_Event_TimeToDisplay_1;                      // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                K2Node_Event_MessageContent;                       // 0x390(0x60)(None)
	bool                                         K2Node_Event_Pin_or_Unpin__Pin_true_will_add_;     // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_UpdaterNotificatorInfo             K2Node_Event_Content_1;                            // 0x3F8(0xC0)(HasGetValueTypeHash)
	bool                                         K2Node_Event_Remove_Manually;                      // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8587[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Time_to_Display;                      // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ManuallyRemove_;                      // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8588[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_TimeToDisplay;                        // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             K2Node_Event_Content;                              // 0x4D8(0xC0)(HasGetValueTypeHash)
	struct FVector                               K2Node_Event_Location;                             // 0x598(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      K2Node_Event_Quality;                              // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8589[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_MainText;                             // 0x5B8(0x18)(None)
	class FText                                  K2Node_Event_BodyText;                             // 0x5D0(0x18)(None)
	double                                       K2Node_Event_TimeToStayBlack;                      // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_To_Black_true__From_Black__False;     // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_858A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_Collision K2Node_Event_Feedback_1;                           // 0x5F8(0x18)(ContainsInstancedReference)
	struct FStructurePlacementFeedback           K2Node_Event_Feedback;                             // 0x610(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_Event_CanRotate;                            // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_858B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_CurrentRotation;                      // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_CanAdjustHeight;                      // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_858C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Height_Current;                       // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Height_Max;                           // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Height_Min;                           // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ControllerClientInteractable_C> K2Node_CustomEvent_InteractionObject_1;            // 0x6F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_InteractionObject;              // 0x708(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x710(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ControllerClientInteractable_C> K2Node_DynamicCast_AsBPI_Controller_Client_Interactable; // 0x718(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x729(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_858D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_DisplayTime;                          // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_TypeText;                             // 0x738(0x18)(None)
	class FText                                  K2Node_Event_HeadlineText;                         // 0x750(0x18)(None)
	enum class EInputActionTypes                 K2Node_CustomEvent_InputActionType;                // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_858E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x770(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_858F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x780(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8590[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          K2Node_CustomEvent_Input_Action;                   // 0x790(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionTypes                 K2Node_CustomEvent_ReleaseActionType;              // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8591[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x7A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0x7A8(0x20)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8592[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionComponent_C*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x7D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8593[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Temp_struct_Variable_1;                            // 0x7E0(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EBuildModeContext                 K2Node_Event_Mode_1;                               // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8594[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_BuildModeFeedbackComponent_C*      CallFunc_GetBuildModeFeedbackComponent_Component;  // 0x8D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EBuildModeAction                  K2Node_Event_Action;                               // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Enabled;                              // 0x8D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x8DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8595[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_BuildModeFeedbackComponent_C*      CallFunc_GetBuildModeFeedbackComponent_Component_1; // 0x8E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8596[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenusComponent*                       CallFunc_GetMenusComponent_ReturnValue;            // 0x8F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBuildingInterface>   CallFunc_CacheAndGetBuildingObject_ReturnValue;    // 0x8F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsBuilding_ReturnValue;                   // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlacing_ReturnValue;                    // 0x909(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8597[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   CallFunc_CacheAndGetBuildingObject_ReturnValue_1;  // 0x910(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlacing_ReturnValue_1;                  // 0x921(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x922(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x923(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBuilding_ReturnValue_1;                 // 0x924(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanNOR_ReturnValue;                   // 0x925(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x926(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8598[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_DisplayTime_1;                        // 0x928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row1;                                 // 0x930(0x58)(HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row2;                                 // 0x988(0x58)(HasGetValueTypeHash)
	struct FS_BigLootNotificationInfo            K2Node_Event_Big_Loot_Notify_Info;                 // 0x9E0(0xC0)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsRecoil;                             // 0xAA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8599[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_IndicatorTime;                        // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_IndicatorColor;                       // 0xAB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitType                         K2Node_Event_Hit_Type;                             // 0xAC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CrosshairTypes                  K2Node_Event_Crosshair_Type;                       // 0xAC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_CrosshairVisibility;                  // 0xAC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_859A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_Crosshair_Color;                      // 0xAC4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitIndicatorTypes               K2Node_Event_HitIndicator_Type;                    // 0xAD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_HitIndicatorVisibility;               // 0xAD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_859B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_DisplayTime_2;                        // 0xAD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row1_1;                               // 0xAE0(0x58)(HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row2_1;                               // 0xB38(0x58)(HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_BackgroundColor;                      // 0xB90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_DisplayTime_3;                        // 0xBA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_QuestNotificatorInfo               K2Node_Event_Quest_Notificator_Info;               // 0xBA8(0xA0)(HasGetValueTypeHash)
	bool                                         K2Node_Event_DisplayToolTip;                       // 0xC48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_859C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ToolTipIcon;                          // 0xC50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_ToolTipText;                          // 0xC58(0x18)(None)
	bool                                         K2Node_Event_ToolTipOnly;                          // 0xC70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bVisible_1;                           // 0xC71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_PlayFX;                               // 0xC72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_859D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ActorToMark;                          // 0xC78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_MarkerPrecision;                      // 0xC80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ParticlesVisible;                     // 0xC88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_859E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_ParticlesColor;                       // 0xC8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_859F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ActorToMark_1;                        // 0xCA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_ActorToMark_2;                        // 0xCA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_Event_PlayerCharacter;                      // 0xCB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      K2Node_Event_PlayerCamera;                         // 0xCB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Colour_1;                             // 0xCC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_IconDistance;                         // 0xCD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_Event_Row;                                  // 0xCD8(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ShowingHUD;                           // 0xCE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0xCE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xCEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0xCEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0xCF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTagValueContainer                    Temp_struct_Variable_2;                            // 0xCF8(0x10)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xD08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_3;                 // 0xD10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0xD18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xD20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_4;                 // 0xD28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayEffectCue>            Temp_struct_Variable_3;                            // 0xD30(0x10)(ConstParm, ReferenceParm)
	int32                                        K2Node_CustomEvent_Hour_1;                         // 0xD40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Min_1;                          // 0xD44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Hour;                           // 0xD48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Min;                            // 0xD4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXCheatManager*                      K2Node_DynamicCast_AsNWXCheat_Manager;             // 0xD50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0xD60(0x8)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_5;                 // 0xD68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface;       // 0xD70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xD81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_CreatureToSpawn;                // 0xD88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_HowMany_;                       // 0xD98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Stationary_;                    // 0xD9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Immortal_;                      // 0xD9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_DestLocation;                   // 0xDA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_6;                 // 0xDB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue;                // 0xDC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xDC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_7;                 // 0xDC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_1;     // 0xDD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xDE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xDE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0xDE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_8;                 // 0xDF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character;                 // 0xDF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xE08(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Temp_struct_Variable_4;                            // 0xE10(0x20)(ConstParm)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0xE30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Temp_struct_Variable_5;                            // 0xE38(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTagValueContainer                    Temp_struct_Variable_6;                            // 0xF20(0x10)(ConstParm)
	TArray<struct FGameplayEffectCue>            Temp_struct_Variable_7;                            // 0xF30(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagValueContainer                    Temp_struct_Variable_8;                            // 0xF48(0x10)(ConstParm)
	bool                                         Temp_bool_Variable_1;                              // 0xF58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadoutDataReference           K2Node_CustomEvent_Loadout;                        // 0xF60(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xF88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0xF90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FHitResult                            Temp_struct_Variable_9;                            // 0xFA0(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FGameplayEffectCue>            Temp_struct_Variable_10;                           // 0x1088(0x10)(ConstParm, ReferenceParm)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_9;                 // 0x1098(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_10;                // 0x10A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_11;                // 0x10A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GodModeTag_GodModeTag;                    // 0x10B0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GodModeTag_GodModeTag_1;                  // 0x10B8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GodModeTag_GodModeTag_2;                  // 0x10C0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue;        // 0x10C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_1;      // 0x10C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MapTracker_C*                      CallFunc_GetMapTracker_MapTrackerComponent;        // 0x10D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       K2Node_DynamicCast_AsNWXPlayer_State;              // 0x10E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x10E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x10E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ILocationTrackerInterface> CallFunc_Server_DebugShowAndUnlockAllMapPins_self_CastInput; // 0x10F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_12;                // 0x1100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character_1;               // 0x1108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_2;      // 0x1111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_13;                // 0x1118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_3;      // 0x1121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_14;                // 0x1128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXActor*                             CallFunc_GetDamageSource_Debug_ReturnValue;        // 0x1130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x1138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXActor*                             CallFunc_GetDamageSource_Debug_ReturnValue_1;      // 0x1140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTagValueContainer                    CallFunc_DamageActor_AggregatedDamageTags;         // 0x1148(0x10)(None)
	class ANWXActor*                             CallFunc_GetDamageSource_Debug_ReturnValue_2;      // 0x1158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput;               // 0x1160(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTagValueContainer                    CallFunc_DamageActor_AggregatedDamageTags_1;       // 0x1170(0x10)(None)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_4;      // 0x1180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_5;      // 0x1181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_6;      // 0x1182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_7;      // 0x1183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_8;      // 0x1184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_9;      // 0x1185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_10;     // 0x1186(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_11;     // 0x1187(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x1188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x118C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1190(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x11A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_12;     // 0x11A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x11A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DebugMenuScreen_C*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x11B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UEnvQueryInstanceBlueprintWrapper*     K2Node_CustomEvent_QueryInstance;                  // 0x11B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   K2Node_CustomEvent_QueryStatus;                    // 0x11C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x11C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Temp_struct_Variable_11;                           // 0x11C8(0x20)(ConstParm)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x11E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagValueContainer                    CallFunc_DamageActor_AggregatedDamageTags_2;       // 0x11F0(0x10)(None)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_13;     // 0x1200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_14;     // 0x1201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x1202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_DebugThirdPersonCameraWidget_C*   CallFunc_Create_ReturnValue;                       // 0x1208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Header;                         // 0x1210(0x18)(None)
	class FText                                  K2Node_CustomEvent_Body;                           // 0x1228(0x18)(None)
	double                                       K2Node_CustomEvent_Duration;                       // 0x1240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x1248(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             K2Node_MakeStruct_S_UpdaterNotificatorInfo;        // 0x1258(0xC0)(HasGetValueTypeHash)
	uint8                                        Pad_85B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable_12;                           // 0x1320(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_MainText;                       // 0x1380(0x18)(None)
	class FText                                  K2Node_CustomEvent_BodyText;                       // 0x1398(0x18)(None)
	class USceneCaptureComponent2D*              CallFunc_AddComponent_ReturnValue;                 // 0x13B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager_1;            // 0x13B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x13C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x13CC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNWXCommonWindowWidget>    K2Node_Event_WidgetToOpen;                         // 0x13E0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x13E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue_1; // 0x13F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x13F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1; // 0x1410(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_15;                // 0x1418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_TeleportTo_ReturnValue_1;              // 0x1420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x1421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       K2Node_CustomEvent_GameState;                      // 0x1428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelFastTravelLocation            CallFunc_Array_Get_Item;                           // 0x1430(0x20)(HasGetValueTypeHash)
	class FString                                CallFunc_Break_LevelFastTravelLocation_Level_Name; // 0x1450(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_FastTravelInformation>      CallFunc_Break_LevelFastTravelLocation_Fast_Travel_Information; // 0x1460(0x10)(ReferenceParm)
	struct FS_FastTravelInformation              CallFunc_Array_Get_Item_1;                         // 0x1470(0x11)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Break_FastTravelInformation_ID;           // 0x1488(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         CallFunc_Break_FastTravelInformation_Fast_Travel_Location_State; // 0x1498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1499(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Discover_Fast_Travel_Location_Success;    // 0x149A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x149B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreTestsRunning_AreTestsRunning;          // 0x149C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreTestsRunning_AreTestsRunning_1;        // 0x149D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success;                        // 0x149E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85BE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAwaitable>           CallFunc_AwaitBP_Awaitable_CastInput;              // 0x14A0(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDelegateHandleBPWrapper              CallFunc_AwaitBP_Handle;                           // 0x14B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x14B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInitialized_bInitialized;               // 0x14B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x14BC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapPinData                           K2Node_Event_MapPinData;                           // 0x14D0(0xB0)(ConstParm)
	struct FMapPinData                           K2Node_CustomEvent_MapPinData;                     // 0x1580(0xB0)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x1630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue;               // 0x1631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1632(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInitialInventoryReceived_ReturnValue;  // 0x1633(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1634(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x1648(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1658(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuildModeContext                 K2Node_Event_Mode;                                 // 0x166C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x166D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1674(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1684(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1694(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x1698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x16A0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x16B0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseSupportCommands_ReturnValue_15;     // 0x16C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_1;                              // 0x16C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable;                              // 0x16D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue;       // 0x16D8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x16F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x16FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction;      // 0x1700(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x1708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_1;                              // 0x1710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0x1718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInteractHold__DelegateSignature
struct ABP_PlayerController_C_OnInteractHold__DelegateSignature_Params
{
public:
	bool                                         bInputPressed;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnInputModeChanged_Dispatcher__DelegateSignature
struct ABP_PlayerController_C_OnInputModeChanged_Dispatcher__DelegateSignature_Params
{
public:
	enum class EInputContext                     Context;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerController.BP_PlayerController_C.OnRepPawn__DelegateSignature
struct ABP_PlayerController_C_OnRepPawn__DelegateSignature_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


