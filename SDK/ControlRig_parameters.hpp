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
// Function ControlRig.ControlRigShapeLibraryLink.SetShapeLibrary
struct UControlRigShapeLibraryLink_SetShapeLibrary_Params
{
public:
	class UControlRigShapeLibrary*               InShapeLibrary;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigShapeLibraryLink.GetShapeLibrary
struct UControlRigShapeLibraryLink_GetShapeLibrary_Params
{
public:
	class UControlRigShapeLibrary*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
struct URigHierarchy_UnsetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_874[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.UnsetCurveValue
struct URigHierarchy_UnsetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_878[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SwitchToWorldSpace
struct URigHierarchy_SwitchToWorldSpace_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87E[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SwitchToParent
struct URigHierarchy_SwitchToParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87F[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SwitchToDefaultParent
struct URigHierarchy_SwitchToDefaultParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_880[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.SortKeys
struct URigHierarchy_SortKeys_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ControlRig.RigHierarchy.SetVectorMetadata
struct URigHierarchy_SetVectorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_881[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InValue;                                           // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_882[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
struct URigHierarchy_SetVectorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_883[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_884[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchy.SetTransformMetadata
struct URigHierarchy_SetTransformMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InValue;                                           // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_886[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
struct URigHierarchy_SetTransformArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_887[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.SetTag
struct URigHierarchy_SetTag_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTag;                                             // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ControlRig.RigHierarchy.SetRotatorMetadata
struct URigHierarchy_SetRotatorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InValue;                                           // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
struct URigHierarchy_SetRotatorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
struct URigHierarchy_SetRigElementKeyMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InValue;                                           // 0x14(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_890[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
struct URigHierarchy_SetRigElementKeyArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_892[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_893[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ControlRig.RigHierarchy.SetQuatMetadata
struct URigHierarchy_SetQuatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_895[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 InValue;                                           // 0x20(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_896[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
struct URigHierarchy_SetQuatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuat>                         InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
struct URigHierarchy_SetPose_ForBlueprint_Params
{
public:
	struct FRigPose                              InPose;                                            // 0x0(0x70)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetParentWeightArray
struct URigHierarchy_SetParentWeightArray_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             InWeights;                                         // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x22(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A0[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetParentWeight
struct URigHierarchy_SetParentWeight_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementWeight                     InWeight;                                          // 0x18(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x26(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.SetNameMetadata
struct URigHierarchy_SetNameMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InValue;                                           // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A5[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetNameArrayMetadata
struct URigHierarchy_SetNameArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
struct URigHierarchy_SetLocalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A9[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetLocalTransform
struct URigHierarchy_SetLocalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetLinearColorMetadata
struct URigHierarchy_SetLinearColorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InValue;                                           // 0x14(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
struct URigHierarchy_SetLinearColorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SetInt32Metadata
struct URigHierarchy_SetInt32Metadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InValue;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
struct URigHierarchy_SetInt32ArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
struct URigHierarchy_SetGlobalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B6[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B7[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetGlobalTransform
struct URigHierarchy_SetGlobalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.SetFloatMetadata
struct URigHierarchy_SetFloatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
struct URigHierarchy_SetFloatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ControlRig.RigHierarchy.SetCurveValueByIndex
struct URigHierarchy_SetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.SetCurveValue
struct URigHierarchy_SetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
struct URigHierarchy_SetControlVisibilityByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibility;                                       // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SetControlVisibility
struct URigHierarchy_SetControlVisibility_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibility;                                       // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8C (0x8C - 0x0)
// Function ControlRig.RigHierarchy.SetControlValueByIndex
struct URigHierarchy_SetControlValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      InValue;                                           // 0x4(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigControlValueType              InValueType;                                       // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x89(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x8A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C2[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x94 (0x94 - 0x0)
// Function ControlRig.RigHierarchy.SetControlValue
struct URigHierarchy_SetControlValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      InValue;                                           // 0xC(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigControlValueType              InValueType;                                       // 0x90(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x91(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x92(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C3[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
struct URigHierarchy_SetControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C4[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C5[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlShapeTransform
struct URigHierarchy_SetControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C8[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x1C8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
struct URigHierarchy_SetControlSettingsByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x8(0x1B8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x1C0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1C1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x1C2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CA[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// Function ControlRig.RigHierarchy.SetControlSettings
struct URigHierarchy_SetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x10(0x1B8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x1C8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x1C9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x1CA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D0[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
struct URigHierarchy_SetControlPreferredRotatorByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InRotator;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixEulerFlips;                                    // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D4[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotator
struct URigHierarchy_SetControlPreferredRotator_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              InRotator;                                         // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixEulerFlips;                                    // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotationOrderByIndex
struct URigHierarchy_SetControlPreferredRotationOrderByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InRotationOrder;                                   // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredRotationOrder
struct URigHierarchy_SetControlPreferredRotationOrder_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InRotationOrder;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredEulerAnglesByIndex
struct URigHierarchy_SetControlPreferredEulerAnglesByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InEulerAngles;                                     // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InRotationOrder;                                   // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixEulerFlips;                                    // 0x22(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DF[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetControlPreferredEulerAngles
struct URigHierarchy_SetControlPreferredEulerAngles_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InEulerAngles;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InRotationOrder;                                   // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixEulerFlips;                                    // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E3[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
struct URigHierarchy_SetControlOffsetTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E4[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E7[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.RigHierarchy.SetControlOffsetTransform
struct URigHierarchy_SetControlOffsetTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F1[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.SetBoolMetadata
struct URigHierarchy_SetBoolMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InValue;                                           // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F5[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
struct URigHierarchy_SetBoolArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 InValue;                                           // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.SendAutoKeyEvent
struct URigHierarchy_SendAutoKeyEvent_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InOffsetInSeconds;                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsynchronous;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchy.ResetPoseToInitial
struct URigHierarchy_ResetPoseToInitial_Params
{
public:
	enum class ERigElementType                   InTypeFilter;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.RemoveMetadata
struct URigHierarchy_RemoveMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.RemoveAllMetadata
struct URigHierarchy_RemoveAllMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.RigHierarchy.Num
struct URigHierarchy_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
struct URigHierarchy_MakeControlValueFromVector2D_Params
{
public:
	struct FVector2D                             InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x10(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_900[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromVector
struct URigHierarchy_MakeControlValueFromVector_Params
{
public:
	struct FVector                               InValue;                                           // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x18(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_902[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
struct URigHierarchy_MakeControlValueFromTransformNoScale_Params
{
public:
	struct FTransformNoScale                     InValue;                                           // 0x0(0x40)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x40(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_903[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
struct URigHierarchy_MakeControlValueFromTransform_Params
{
public:
	struct FTransform                            InValue;                                           // 0x0(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x60(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_904[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
struct URigHierarchy_MakeControlValueFromRotator_Params
{
public:
	struct FRotator                              InValue;                                           // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x18(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_905[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromInt
struct URigHierarchy_MakeControlValueFromInt_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
struct URigHierarchy_MakeControlValueFromFloat_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
struct URigHierarchy_MakeControlValueFromEulerTransform_Params
{
public:
	struct FEulerTransform                       InValue;                                           // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      ReturnValue;                                       // 0x48(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_907[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.MakeControlValueFromBool
struct URigHierarchy_MakeControlValueFromBool_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_908[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      ReturnValue;                                       // 0x4(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsValidIndex
struct URigHierarchy_IsValidIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_909[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsSelectedByIndex
struct URigHierarchy_IsSelectedByIndex_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsSelected
struct URigHierarchy_IsSelected_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsProcedural
struct URigHierarchy_IsProcedural_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.IsParentedTo
struct URigHierarchy_IsParentedTo_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
struct URigHierarchy_IsCurveValueSetByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.IsCurveValueSet
struct URigHierarchy_IsCurveValueSet_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchy.IsControllerAvailable
struct URigHierarchy_IsControllerAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.HasTag
struct URigHierarchy_HasTag_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTag;                                             // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_910[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorMetadata
struct URigHierarchy_GetVectorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_911[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultValue;                                      // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorFromControlValue
struct URigHierarchy_GetVectorFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_912[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x88(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
struct URigHierarchy_GetVectorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_913[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
struct URigHierarchy_GetVector2DFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_914[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x88(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
struct URigHierarchy_GetTransformNoScaleFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_915[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransformNoScale                     ReturnValue;                                       // 0x90(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformMetadata
struct URigHierarchy_GetTransformMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_916[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DefaultValue;                                      // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x80(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformFromControlValue
struct URigHierarchy_GetTransformFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_917[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x90(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
struct URigHierarchy_GetTransformArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_918[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetTags
struct URigHierarchy_GetTags_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_919[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetSelectedKeys
struct URigHierarchy_GetSelectedKeys_Params
{
public:
	enum class ERigElementType                   InTypeFilter;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorMetadata
struct URigHierarchy_GetRotatorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DefaultValue;                                      // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
struct URigHierarchy_GetRotatorFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_91C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x88(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
struct URigHierarchy_GetRotatorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetRootElementKeys
struct URigHierarchy_GetRootElementKeys_Params
{
public:
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetRigidBodyKeys
struct URigHierarchy_GetRigidBodyKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
struct URigHierarchy_GetRigElementKeyMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        DefaultValue;                                      // 0x14(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
struct URigHierarchy_GetRigElementKeyArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetReferenceKeys
struct URigHierarchy_GetReferenceKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_920[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.RigHierarchy.GetQuatMetadata
struct URigHierarchy_GetQuatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_921[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 DefaultValue;                                      // 0x20(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 ReturnValue;                                       // 0x40(0x20)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
struct URigHierarchy_GetQuatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_922[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuat>                         ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetPreviousParent
struct URigHierarchy_GetPreviousParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchy.GetPreviousName
struct URigHierarchy_GetPreviousName_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ControlRig.RigHierarchy.GetPose
struct URigHierarchy_GetPose_Params
{
public:
	bool                                         bInitial;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_923[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigPose                              ReturnValue;                                       // 0x8(0x70)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetParentWeightArray
struct URigHierarchy_GetParentWeightArray_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_924[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetParentWeight
struct URigHierarchy_GetParentWeight_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_925[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementWeight                     ReturnValue;                                       // 0x1C(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetParentTransformByIndex
struct URigHierarchy_GetParentTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_926[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetParentTransform
struct URigHierarchy_GetParentTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_927[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetParents
struct URigHierarchy_GetParents_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_928[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetNumberOfParents
struct URigHierarchy_GetNumberOfParents_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetNullKeys
struct URigHierarchy_GetNullKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_929[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchy.GetNameMetadata
struct URigHierarchy_GetNameMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultValue;                                      // 0x14(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x1C(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetNameArrayMetadata
struct URigHierarchy_GetNameArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetMetadataType
struct URigHierarchy_GetMetadataType_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetMetadataNames
struct URigHierarchy_GetMetadataNames_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
struct URigHierarchy_GetLocalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92D[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalTransform
struct URigHierarchy_GetLocalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
struct URigHierarchy_GetLocalIndex_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
struct URigHierarchy_GetLocalControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92F[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
struct URigHierarchy_GetLocalControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_930[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function ControlRig.RigHierarchy.GetLinearColorMetadata
struct URigHierarchy_GetLinearColorMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultValue;                                      // 0x14(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
struct URigHierarchy_GetLinearColorArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_931[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetKeys
struct URigHierarchy_GetKeys_Params
{
public:
	TArray<int32>                                InElementIndices;                                  // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetKey
struct URigHierarchy_GetKey_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.GetIntFromControlValue
struct URigHierarchy_GetIntFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x84(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.GetInt32Metadata
struct URigHierarchy_GetInt32Metadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
struct URigHierarchy_GetInt32ArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_932[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
struct URigHierarchy_GetIndex_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
struct URigHierarchy_GetGlobalTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_933[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalTransform
struct URigHierarchy_GetGlobalTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_934[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
struct URigHierarchy_GetGlobalControlShapeTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_935[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
struct URigHierarchy_GetGlobalControlShapeTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_936[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
struct URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_937[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
struct URigHierarchy_GetGlobalControlOffsetTransform_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_938[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchy.GetFloatMetadata
struct URigHierarchy_GetFloatMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ControlRig.RigHierarchy.GetFloatFromControlValue
struct URigHierarchy_GetFloatFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x84(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
struct URigHierarchy_GetFloatArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_939[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetFirstParent
struct URigHierarchy_GetFirstParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
struct URigHierarchy_GetEulerTransformFromControlValue_Params
{
public:
	struct FRigControlValue                      InValue;                                           // 0x0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_93A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEulerTransform                       ReturnValue;                                       // 0x88(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetDefaultParent
struct URigHierarchy_GetDefaultParent_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveValueByIndex
struct URigHierarchy_GetCurveValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveValue
struct URigHierarchy_GetCurveValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetCurveKeys
struct URigHierarchy_GetCurveKeys_Params
{
public:
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8C (0x8C - 0x0)
// Function ControlRig.RigHierarchy.GetControlValueByIndex
struct URigHierarchy_GetControlValueByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlValueType              InValueType;                                       // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      ReturnValue;                                       // 0x8(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x94 (0x94 - 0x0)
// Function ControlRig.RigHierarchy.GetControlValue
struct URigHierarchy_GetControlValue_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlValueType              InValueType;                                       // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      ReturnValue;                                       // 0x10(0x84)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
struct URigHierarchy_GetControlPreferredRotatorByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredRotator
struct URigHierarchy_GetControlPreferredRotator_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrderByIndex
struct URigHierarchy_GetControlPreferredEulerRotationOrderByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSettings;                                     // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93F[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrder
struct URigHierarchy_GetControlPreferredEulerRotationOrder_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSettings;                                     // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_940[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredEulerAnglesByIndex
struct URigHierarchy_GetControlPreferredEulerAnglesByIndex_Params
{
public:
	int32                                        InElementIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InRotationOrder;                                   // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_941[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetControlPreferredEulerAngles
struct URigHierarchy_GetControlPreferredEulerAngles_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               InRotationOrder;                                   // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_942[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.GetController
struct URigHierarchy_GetController_Params
{
public:
	bool                                         bCreateIfNeeded;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_943[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchyController*               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetControlKeys
struct URigHierarchy_GetControlKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_944[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchy.GetChildren
struct URigHierarchy_GetChildren_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_945[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetBoolMetadata
struct URigHierarchy_GetBoolMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultValue;                                      // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_946[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
struct URigHierarchy_GetBoolArrayMetadata_Params
{
public:
	struct FRigElementKey                        InItem;                                            // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InMetadataName;                                    // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_947[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetBoneKeys
struct URigHierarchy_GetBoneKeys_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_948[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
struct URigHierarchy_GetAllKeys_ForBlueprint_Params
{
public:
	bool                                         bTraverse;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_949[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x3E0 (0x3E0 - 0x0)
// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
struct URigHierarchy_FindNull_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigNullElement                       ReturnValue;                                       // 0x10(0x3D0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x920 (0x920 - 0x0)
// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
struct URigHierarchy_FindControl_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlElement                    ReturnValue;                                       // 0x10(0x910)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
struct URigHierarchy_FindBone_ForBlueprintOnly_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigBoneElement                       ReturnValue;                                       // 0x10(0x2E0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.CopyPose
struct URigHierarchy_CopyPose_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrent;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeights;                                          // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchPoseInGlobalIfNeeded;                        // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchy.CopyHierarchy
struct URigHierarchy_CopyHierarchy_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchy.Contains_ForBlueprint
struct URigHierarchy_Contains_ForBlueprint_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.SetInteractionRigClass
struct UControlRig_SetInteractionRigClass_Params
{
public:
	TSubclassOf<class UControlRig>               InInteractionRigClass;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.SetInteractionRig
struct UControlRig_SetInteractionRig_Params
{
public:
	class UControlRig*                           InInteractionRig;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRig.SelectControl
struct UControlRig_SelectControl_Params
{
public:
	class FName                                  InControlName;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelect;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_956[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x930 (0x930 - 0x0)
// SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
struct UControlRig_OnControlSelectedBP__DelegateSignature_Params
{
public:
	class UControlRig*                           Rig;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_957[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlElement                    Control;                                           // 0x10(0x910)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSelected;                                         // 0x920(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_958[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRig.IsControlSelected
struct UControlRig_IsControlSelected_Params
{
public:
	class FName                                  InControlName;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_959[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetInteractionRigClass
struct UControlRig_GetInteractionRigClass_Params
{
public:
	TSubclassOf<class UControlRig>               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetInteractionRig
struct UControlRig_GetInteractionRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetHostingActor
struct UControlRig_GetHostingActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRig.GetHierarchy
struct UControlRig_GetHierarchy_Params
{
public:
	class URigHierarchy*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.ControlRig.FindControlRigs
struct UControlRig_FindControlRigs_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlRig>               OptionalClass;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UControlRig*>                   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRig.CurrentControlSelection
struct UControlRig_CurrentControlSelection_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRig.CreateTransformableControlHandle
struct UControlRig_CreateTransformableControlHandle_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableControlHandle*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRig.ClearControlSelection
struct UControlRig_ClearControlSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRigComponent.Update
struct UControlRigComponent_Update_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetObjectBinding
struct UControlRigComponent_SetObjectBinding_Params
{
public:
	class UObject*                               InObjectToBind;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.SetMappedElements
struct UControlRigComponent_SetMappedElements_Params
{
public:
	TArray<struct FControlRigComponentMappedElement> NewMappedElements;                                 // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
struct UControlRigComponent_SetInitialSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_961[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_962[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
struct UControlRigComponent_SetInitialBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_963[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_964[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlVector2D
struct UControlRigComponent_SetControlVector2D_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Value;                                             // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlTransform
struct UControlRigComponent_SetControlTransform_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_965[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_967[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlScale
struct UControlRigComponent_SetControlScale_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_968[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlRotator
struct UControlRigComponent_SetControlRotator_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlRigClass
struct UControlRigComponent_SetControlRigClass_Params
{
public:
	TSubclassOf<class UControlRig>               InControlRigClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlPosition
struct UControlRigComponent_SetControlPosition_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetControlOffset
struct UControlRigComponent_SetControlOffset_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96F[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlInt
struct UControlRigComponent_SetControlInt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlFloat
struct UControlRigComponent_SetControlFloat_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.SetControlBool
struct UControlRigComponent_SetControlBool_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_970[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ControlRig.ControlRigComponent.SetBoneTransform
struct UControlRigComponent_SetBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_971[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_972[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x74(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x78(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_973[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
struct UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params
{
public:
	class USkeletalMesh*                         InSkeletalMesh;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
struct UControlRigComponent_OnPreForwardsSolve_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPreConstruction
struct UControlRigComponent_OnPreConstruction_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
struct UControlRigComponent_OnPostForwardsSolve_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.OnPostConstruction
struct UControlRigComponent_OnPostConstruction_Params
{
public:
	class UControlRigComponent*                  Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetSpaceTransform
struct UControlRigComponent_GetSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_975[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
struct UControlRigComponent_GetInitialSpaceTransform_Params
{
public:
	class FName                                  SpaceName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_976[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
struct UControlRigComponent_GetInitialBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_977[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.GetElementNames
struct UControlRigComponent_GetElementNames_Params
{
public:
	enum class ERigElementType                   ElementType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_979[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlVector2D
struct UControlRigComponent_GetControlVector2D_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlTransform
struct UControlRigComponent_GetControlTransform_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlScale
struct UControlRigComponent_GetControlScale_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlRotator
struct UControlRigComponent_GetControlRotator_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlRig
struct UControlRigComponent_GetControlRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlPosition
struct UControlRigComponent_GetControlPosition_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetControlOffset
struct UControlRigComponent_GetControlOffset_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlInt
struct UControlRigComponent_GetControlInt_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlFloat
struct UControlRigComponent_GetControlFloat_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.GetControlBool
struct UControlRigComponent_GetControlBool_Params
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_980[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ControlRig.ControlRigComponent.GetBoneTransform
struct UControlRigComponent_GetBoneTransform_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_982[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRigComponent.GetAbsoluteTime
struct UControlRigComponent_GetAbsoluteTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ControlRig.ControlRigComponent.DoesElementExist
struct UControlRigComponent_DoesElementExist_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_986[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigComponent.CanExecute
struct UControlRigComponent_CanExecute_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
struct UControlRigComponent_AddMappedSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedBone> Bones;                                             // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedCurve> Curves;                                            // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedElements
struct UControlRigComponent_AddMappedElements_Params
{
public:
	TArray<struct FControlRigComponentMappedElement> NewMappedElements;                                 // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedComponents
struct UControlRigComponent_AddMappedComponents_Params
{
public:
	TArray<struct FControlRigComponentMappedComponent> Components;                                        // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
struct UControlRigComponent_AddMappedCompleteSkeletalMesh_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetSelected
struct AControlRigShapeActor_SetSelected_Params
{
public:
	bool                                         bInSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetSelectable
struct AControlRigShapeActor_SetSelectable_Params
{
public:
	bool                                         bInSelectable;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetHovered
struct AControlRigShapeActor_SetHovered_Params
{
public:
	bool                                         bInHovered;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
struct AControlRigShapeActor_SetGlobalTransform_Params
{
public:
	struct FTransform                            InTransform;                                       // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.SetEnabled
struct AControlRigShapeActor_SetEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnTransformChanged
struct AControlRigShapeActor_OnTransformChanged_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
struct AControlRigShapeActor_OnSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
struct AControlRigShapeActor_OnManipulatingChanged_Params
{
public:
	bool                                         bIsManipulating;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
struct AControlRigShapeActor_OnHoveredChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
struct AControlRigShapeActor_OnEnabledChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
struct AControlRigShapeActor_IsSelectedInEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsHovered
struct AControlRigShapeActor_IsHovered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigShapeActor.IsEnabled
struct AControlRigShapeActor_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
struct AControlRigShapeActor_GetGlobalTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigTestData.SetupReplay
struct UControlRigTestData_SetupReplay_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGroundTruth;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTestData.Record
struct UControlRigTestData_Record_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       InRecordingDuration;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.IsReplaying
struct UControlRigTestData_IsReplaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.IsRecording
struct UControlRigTestData_IsRecording_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTestData.GetTimeRange
struct UControlRigTestData_GetTimeRange_Params
{
public:
	bool                                         bInput;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigTestData.GetPlaybackMode
struct UControlRigTestData_GetPlaybackMode_Params
{
public:
	enum class EControlRigTestDataPlaybackMode   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
struct UControlRigTestData_GetFrameIndexForTime_Params
{
public:
	double                                       InSeconds;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInput;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.ControlRigTestData.CreateNewAsset
struct UControlRigTestData_CreateNewAsset_Params
{
public:
	class FString                                InDesiredPackagePath;                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InBlueprintPathName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UControlRigTestData*                   ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.RigHierarchyController.SetSelection
struct URigHierarchyController_SetSelection_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BD[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.SetParent
struct URigHierarchyController_SetParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobalTransform;                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1B(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchyController.SetHierarchy
struct URigHierarchyController_SetHierarchy_Params
{
public:
	class URigHierarchy*                         InHierarchy;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.SetDisplayName
struct URigHierarchyController_SetDisplayName_Params
{
public:
	struct FRigElementKey                        InControl;                                         // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InDisplayName;                                     // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenameElement;                                    // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x16(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ControlRig.RigHierarchyController.SetControlSettings
struct URigHierarchyController_SetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x10(0x1B8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x1C8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C3[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.SelectElement
struct URigHierarchyController_SelectElement_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelect;                                           // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearSelection;                                   // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C5[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ControlRig.RigHierarchyController.ReorderElement
struct URigHierarchyController_ReorderElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InIndex;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x12(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C6[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function ControlRig.RigHierarchyController.RenameElement
struct URigHierarchyController_RenameElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InName;                                            // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearSelection;                                   // 0x16(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.RemoveParent
struct URigHierarchyController_RemoveParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobalTransform;                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1B(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.RemoveElement
struct URigHierarchyController_RemoveElement_Params
{
public:
	struct FRigElementKey                        InElement;                                         // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CC[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.RemoveAllParents
struct URigHierarchyController_RemoveAllParents_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobalTransform;                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0xE(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ControlRig.RigHierarchyController.MirrorElements
struct URigHierarchyController_MirrorElements_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigVMMirrorSettings                  InSettings;                                        // 0x10(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         bSelectNewElements;                                // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x3A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CF[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x40(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportFromText
struct URigHierarchyController_ImportFromText_Params
{
public:
	class FString                                InContent;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceExistingElements;                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectNewElements;                                // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x13(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportCurves
struct URigHierarchyController_ImportCurves_Params
{
public:
	class USkeleton*                             InSkeleton;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InNameSpace;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectCurves;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D4[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.ImportBones
struct URigHierarchyController_ImportBones_Params
{
public:
	class USkeleton*                             InSkeleton;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InNameSpace;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceExistingBones;                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveObsoleteBones;                              // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectBones;                                      // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x13(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.RigHierarchyController.GetHierarchy
struct URigHierarchyController_GetHierarchy_Params
{
public:
	class URigHierarchy*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1C8 - 0x0)
// Function ControlRig.RigHierarchyController.GetControlSettings
struct URigHierarchyController_GetControlSettings_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   ReturnValue;                                       // 0x10(0x1B8)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.ExportToText
struct URigHierarchyController_ExportToText_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.ExportSelectionToText
struct URigHierarchyController_ExportSelectionToText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ControlRig.RigHierarchyController.DuplicateElements
struct URigHierarchyController_DuplicateElements_Params
{
public:
	TArray<struct FRigElementKey>                InKeys;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSelectNewElements;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommands;                              // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DC[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.RigHierarchyController.DeselectElement
struct URigHierarchyController_DeselectElement_Params
{
public:
	struct FRigElementKey                        InKey;                                             // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.RigHierarchyController.ClearSelection
struct URigHierarchyController_ClearSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddRigidBody
struct URigHierarchyController_AddRigidBody_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigRigidBodySettings                 InSettings;                                        // 0x14(0x4)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InLocalTransform;                                  // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ControlRig.RigHierarchyController.AddParent
struct URigHierarchyController_AddParent_Params
{
public:
	struct FRigElementKey                        InChild;                                           // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0xC(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InWeight;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobalTransform;                          // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1E(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E2[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddNull
struct URigHierarchyController_AddNull_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E3[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransformInGlobal;                                // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x82(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ControlRig.RigHierarchyController.AddCurve
struct URigHierarchyController_AddCurve_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x268 (0x268 - 0x0)
// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
struct URigHierarchyController_AddControl_ForBlueprint_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x18(0x1B8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      InValue;                                           // 0x1D0(0x84)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x254(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x255(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x258(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ControlRig.RigHierarchyController.AddBone
struct URigHierarchyController_AddBone_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParent;                                          // 0x8(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EB[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransformInGlobal;                                // 0x80(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigBoneType                      InBoneType;                                        // 0x81(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x82(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x83(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ReturnValue;                                       // 0x84(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
struct URigHierarchyController_AddAnimationChannel_ForBlueprint_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        InParentControl;                                   // 0x8(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlSettings                   InSettings;                                        // 0x18(0x1B8)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetupUndo;                                        // 0x1D0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintPythonCommand;                               // 0x1D1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ReturnValue;                                       // 0x1D4(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.SelectControls
struct UControlRigPoseAsset_SelectControls_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoMirror;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A03[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.SavePose
struct UControlRigPoseAsset_SavePose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAll;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A06[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
struct UControlRigPoseAsset_ReplaceControlName_Params
{
public:
	class FName                                  CurrentName;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewName;                                           // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.PastePose
struct UControlRigPoseAsset_PastePose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoKey;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoMirror;                                         // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A08[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
struct UControlRigPoseAsset_GetCurrentPose_Params
{
public:
	class UControlRig*                           InControlRig;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FControlRigControlPose                OutPose;                                           // 0x8(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ControlRig.ControlRigPoseAsset.GetControlNames
struct UControlRigPoseAsset_GetControlNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
struct UControlRigPoseAsset_DoesMirrorMatch_Params
{
public:
	class UControlRig*                           ControlRig;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
struct UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
struct UControlRigTransformWorkflowOptions_ProvideWorkflows_Params
{
public:
	class UObject*                               InSubject;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigVMUserWorkflow>            ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


