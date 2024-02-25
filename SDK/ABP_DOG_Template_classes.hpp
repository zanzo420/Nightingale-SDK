#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E10 (0x2500 - 0x6F0)
// AnimBlueprintGeneratedClass ABP_DOG_Template.ABP_DOG_Template_C
class UABP_DOG_Template_C : public UNWXAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x6F8(0x26)(HasGetValueTypeHash)
	uint8                                        Pad_A896[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x720(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x728(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x730(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x750(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x808(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x828(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x8E0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x900(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x9B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x9D8(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0xA90(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xAB0(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xB68(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xB88(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xC40(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xC60(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xD18(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0xD38(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xDF0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xE10(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xEC8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0xEE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xF10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xF38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xF60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xF88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xFB0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0xFD8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x1020(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x1068(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1088(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x10D0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1118(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1138(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1180(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x11C8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x11E8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1230(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0x1278(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x1340(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x1360(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x1428(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x14A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x14D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x14F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1548(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1570(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1598(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x15C0(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x15E8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1608(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1650(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1698(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x16B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1700(0x48)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x1748(0x90)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x17D8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1820(0x20)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x1840(0xD0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1910(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x1980(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x19A8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x19C8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x1A90(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x1AB8(0x80)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x1B38(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x1C00(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x1C80(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x1CA8(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x1CD0(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x1D98(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1E60(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1E88(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1EA8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1EC8(0x128)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1FF0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x2038(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2080(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x20A0(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x2168(0x80)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x21E8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x22B0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x22D8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2320(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x23A0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x23E8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x2430(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2458(0x80)(None)
	double                                       __CustomProperty_InDynamicsAlpha_B109DFF24D914B2F389A42A676A049C0; // 0x24D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              __CustomProperty_LookAtRot_47C391B147B45211297F5BBD184C321C; // 0x24E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       __CustomProperty_LookatAlpha_47C391B147B45211297F5BBD184C321C; // 0x24F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_DOG_Template_C* GetDefaultObj();

	void LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour);
	void Hand_IK(const struct FPoseLink& Input, const struct FVector& Hand_l, double Hand_l_Alpha, struct FPoseLink* Hand_IK);
	void BoneAdditiveTransform(const struct FPoseLink& InPose_6, double WorldTime, struct FPoseLink* BoneAdditiveTransform);
	void Procedural_Walk(const struct FPoseLink& InPose_5, bool WalkOn_, const struct FRotator& BodyRot, const struct FLegItem& Leg_ITM_0, const struct FLegItem& Leg_ITM_1, const struct FLegItem& Leg_ITM_2, const struct FLegItem& Leg_ITM_3, const struct FLegItem& Leg_ITM_4, const struct FLegItem& Leg_ITM_5, const struct FLegItem& Leg_ITM_6, const struct FLegItem& Leg_ITM_7, struct FPoseLink* Procedural_Walk);
	void LookAtTarget(const struct FPoseLink& InPose_4, double LookAtAlpha, const struct FRotator& LookAtRot, double EyeAlpha, struct FPoseLink* LookAtTarget);
	void Dynamics(const struct FPoseLink& InPose_3, double InDynamicsAlpha, struct FPoseLink* Dynamics);
	void OffHandIK(const struct FPoseLink& InPose_2, bool InputIKSwitch, const struct FVector& InputIKLocation, struct FPoseLink* OffHandIK);
	void GroundPowerIk(const struct FPoseLink& InPose_0, bool PowerIK_Switch, struct FPoseLink* GroundPowerIk);
	void ControlRig(const struct FPoseLink& InPose_1, const struct FRotator& Rotation, bool IsMinHealth_, struct FPoseLink* ControlRig);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_Template_AnimGraphNode_TransitionResult_D41B5FB1496F9A9F7EAC0EB5976BBAEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_Template_AnimGraphNode_TransitionResult_A3B42F3F4B40455ED5A387BF0C898C40();
	void ExecuteUbergraph_ABP_DOG_Template(int32 EntryPoint, bool CallFunc_GetIsSleeping_ReturnValue, bool CallFunc_GetIsSleeping_ReturnValue_1);
};

}


