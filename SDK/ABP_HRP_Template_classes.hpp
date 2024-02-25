#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1350 (0x1A40 - 0x6F0)
// AnimBlueprintGeneratedClass ABP_HRP_Template.ABP_HRP_Template_C
class UABP_HRP_Template_C : public UNWXAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x6F8(0x1B)(HasGetValueTypeHash)
	uint8                                        Pad_A636[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x718(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x720(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x728(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x748(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x800(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x820(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x8D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x8F8(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x9B0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x9D0(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xA88(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xAA8(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xB60(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xB80(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xC38(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0xC58(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xD10(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xD30(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xDE8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xE08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xE30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xE58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xE80(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xEA8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0xEF0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0xF38(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xF58(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0xFA0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xFE8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1008(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1050(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1098(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x10B8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x1180(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x1200(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1248(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1270(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x12B8(0x48)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x1300(0x90)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1390(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x13D8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x13F8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1420(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1440(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1508(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x1588(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x15D0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x1618(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x1698(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x16C0(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1788(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x17B0(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1878(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x18A0(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1968(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x19E8(0x28)(None)
	double                                       __CustomProperty_EyeAlpha_3197EE41402A1C02F260E2853433E350; // 0x1A10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              __CustomProperty_LookAtRot_3197EE41402A1C02F260E2853433E350; // 0x1A18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       __CustomProperty_LookatAlpha_3197EE41402A1C02F260E2853433E350; // 0x1A30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CombatKey;                                         // 0x1A38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_HRP_Template_C* GetDefaultObj();

	void Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK);
	void BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform);
	void Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk);
	void LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget);
	void Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics);
	void OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK);
	void GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk);
	void ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintBeginPlay();
	void OnCombatChanged(bool bIsInCombat);
	void ExecuteUbergraph_ABP_HRP_Template(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bIsInCombat, class FName CallFunc_GetDefaultDAName_ReturnValue);
};

}


