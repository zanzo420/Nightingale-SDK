#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFE0 (0x1328 - 0x348)
// AnimBlueprintGeneratedClass ABP_HRP_Harpy_Overrides.ABP_HRP_Harpy_Overrides_C
class UABP_HRP_Harpy_Overrides_C : public UAnimInstance
{
public:
	uint8                                        Pad_A63F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x388(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x440(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x460(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x518(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x538(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x5F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x610(0xB8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x6C8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x7F0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x918(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xA40(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xB68(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xB88(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xBA8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xBC8(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xC80(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xCA0(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xD58(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0xD78(0xB8)(None)
	struct FAnimNode_PowerIK_Ground              AnimGraphNode_PowerIK_Ground;                      // 0xE30(0x3A0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x11D0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x11F0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1210(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1230(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x12E8(0x20)(None)
	struct FRotator                              LookAtRot;                                         // 0x1308(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       LookAtAlpha;                                       // 0x1320(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_HRP_Harpy_Overrides_C* GetDefaultObj();

	void Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK);
	void BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform);
	void Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk);
	void LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget);
	void Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics);
	void OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK);
	void GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk);
	void ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_HRP_Harpy_Overrides(int32 EntryPoint);
};

}


