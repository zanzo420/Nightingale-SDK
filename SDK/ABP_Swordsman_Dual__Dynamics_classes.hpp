#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB38 (0xE80 - 0x348)
// AnimBlueprintGeneratedClass ABP_Swordsman_Dual__Dynamics.ABP_Swordsman_Dual__Dynamics_C
class UABP_Swordsman_Dual__Dynamics_C : public UAnimInstance
{
public:
	uint8                                        Pad_A4C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x388(0x158)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x4E0(0x960)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE40(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xE60(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_Swordsman_Dual__Dynamics_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Swordsman_Dual__Dynamics(int32 EntryPoint);
};

}


