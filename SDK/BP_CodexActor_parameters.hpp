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

// 0x1 (0x1 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.CanQueryInteractable
struct ABP_CodexActor_C_CanQueryInteractable_Params
{
public:
	bool                                         Can_Query;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.HoldInteractionAvailable
struct ABP_CodexActor_C_HoldInteractionAvailable_Params
{
public:
	bool                                         bAvailable;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.IsInteractionDisabled
struct ABP_CodexActor_C_IsInteractionDisabled_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         bIsDisabled;                                       // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A58F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisabledText;                                      // 0x188(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.DoesHaveResourceType
struct ABP_CodexActor_C_DoesHaveResourceType_Params
{
public:
	int32                                        HitId;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     DesiredResourceType;                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasResourceType;                                  // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x179 (0x179 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.IsHarvestable
struct ABP_CodexActor_C_IsHarvestable_Params
{
public:
	struct FInteractionData                      Interaction;                                       // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         IsHarvestable;                                     // 0x178(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.GetInteractIcon
struct ABP_CodexActor_C_GetInteractIcon_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x178(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x1E9 (0x1E9 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.CanInteractWithActor
struct ABP_CodexActor_C_CanInteractWithActor_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         InteractAvailable;                                 // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A597[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A598[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput;    // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCodexAssetReference                  CallFunc_GetCodexAssetReference_ReturnValue;       // 0x1A8(0x10)(ConstParm, NoDestructor)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput;       // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetCodexComponentID_OutID;                // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_CanGrantCodex_self_CastInput;             // 0x1D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanGrantCodex_ReturnValue;                // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.ReturnMeshToHighlight
struct ABP_CodexActor_C_ReturnMeshToHighlight_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          StaticMesh_to_Highlight;                           // 0x178(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        SkeletalMesh_to_Highlight;                         // 0x188(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         Hostile_;                                          // 0x198(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0x199(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowHopeEcho_ReturnValue;           // 0x19A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A59D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array;                            // 0x1A0(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.InteractPressed
struct ABP_CodexActor_C_InteractPressed_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.InteractReleased
struct ABP_CodexActor_C_InteractReleased_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.InteractionRequiresClientOnly
struct ABP_CodexActor_C_InteractionRequiresClientOnly_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresClientAction;                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.GetInteractText
struct ABP_CodexActor_C_GetInteractText_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class FString                                InteractText;                                      // 0x178(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Interactable_StringTableText;                      // 0x188(0x18)(Edit, BlueprintVisible)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x13A (0x13A - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.EvaluateCodexGrantedOrUpdated
struct ABP_CodexActor_C_EvaluateCodexGrantedOrUpdated_Params
{
public:
	struct FCodexEntry                           CodexEntry;                                        // 0x0(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          SubentryTag;                                       // 0xF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput;    // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCodexAssetReference                  CallFunc_GetCodexAssetReference_ReturnValue;       // 0x108(0x10)(ConstParm, NoDestructor)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput_1;  // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCodexAssetReference                  CallFunc_GetCodexAssetReference_ReturnValue_1;     // 0x128(0x10)(ConstParm, NoDestructor)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.OnClientReady
struct ABP_CodexActor_C_OnClientReady_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput;       // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetCodexComponentID_OutID;                // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue;                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.InitializeCodexAfterInstanceIDReplication
struct ABP_CodexActor_C_InitializeCodexAfterInstanceIDReplication_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexComponentInterface> CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.DeinitializeCodexTrackerBindings
struct ABP_CodexActor_C_DeinitializeCodexTrackerBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_UnbindEventFrom_OnCodexUpdated_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICodexTrackerInterface> CallFunc_UnbindEventFrom_OnCodexGranted_self_CastInput; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.RemoveBindings
struct ABP_CodexActor_C_RemoveBindings_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICodexComponentInterface> CallFunc_UnbindEventFrom_OnCodexInstanceIDReplicated_self_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.InitializeCodexTrackerBindings
struct ABP_CodexActor_C_InitializeCodexTrackerBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexUpdated_self_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexGranted_self_CastInput; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.SetupBindings
struct ABP_CodexActor_C_SetupBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput;       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetCodexComponentID_OutID;                // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.InitializeHopeEcho
struct ABP_CodexActor_C_InitializeHopeEcho_Params
{
public:
	bool                                         CallFunc_CheckCodexVisibility_bShouldBeVisible;    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.CheckCodexVisibility
struct ABP_CodexActor_C_CheckCodexVisibility_Params
{
public:
	bool                                         bShouldBeVisible;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowHopeEcho_ReturnValue;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCodexAssetReference                  CallFunc_GetCodexAssetReference_ReturnValue;       // 0x18(0x10)(ConstParm, NoDestructor)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput;       // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetCodexComponentID_OutID;                // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_CanGrantCodex_self_CastInput;             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanGrantCodex_ReturnValue;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.HideEchoOnClient
struct ABP_CodexActor_C_HideEchoOnClient_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NVFX_SpawnSystem_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;    // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.UpdateCodexVisibility
struct ABP_CodexActor_C_UpdateCodexVisibility_Params
{
public:
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckCodexVisibility_bShouldBeVisible;    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.PerformClientSideInteraction
struct ABP_CodexActor_C_PerformClientSideInteraction_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.ReceiveEndPlay
struct ABP_CodexActor_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_CodexActor.BP_CodexActor_C.ExecuteUbergraph_BP_CodexActor
struct ABP_CodexActor_C_ExecuteUbergraph_BP_CodexActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_Controller;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCodexTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXGameStateBase*                     K2Node_DynamicCast_AsNWXGame_State_Base;           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAwaitable>           CallFunc_AwaitBP_Awaitable_CastInput;              // 0x50(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDelegateHandleBPWrapper              CallFunc_AwaitBP_Handle;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexAssetReference_self_CastInput;    // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCodexAssetReference                  CallFunc_GetCodexAssetReference_ReturnValue;       // 0x80(0x10)(ConstParm, NoDestructor)
	TScriptInterface<class ICodexComponentInterface> CallFunc_GetCodexComponentID_self_CastInput;       // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetCodexComponentID_OutID;                // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_GrantCodexEntry_self_CastInput;           // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


