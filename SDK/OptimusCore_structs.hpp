#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptimusDiagnosticLevel : uint8
{
	None                           = 0,
	Info                           = 1,
	Warning                        = 2,
	Error                          = 3,
	EOptimusDiagnosticLevel_MAX    = 4,
};

enum class EOptimusBufferWriteType : uint8
{
	Write                          = 0,
	WriteAtomicAdd                 = 1,
	WriteAtomicMin                 = 2,
	WriteAtomicMax                 = 3,
	Count                          = 4,
	EOptimusBufferWriteType_MAX    = 5,
};

enum class EOptimusSkinnedMeshExecDomain : uint8
{
	None                           = 0,
	Vertex                         = 1,
	Triangle                       = 2,
	EOptimusSkinnedMeshExecDomain_MAX = 3,
};

enum class EOptimusTerminalType : int32
{
	Unknown                        = 0,
	Entry                          = 1,
	Return                         = 2,
	EOptimusTerminalType_MAX       = 3,
};

enum class EOptimusDataDomainType : int32
{
	Dimensional                    = 0,
	Expression                     = 1,
	EOptimusDataDomainType_MAX     = 2,
};

enum class EOptimusDataTypeUsageFlags : uint8
{
	None                           = 0,
	Resource                       = 1,
	Variable                       = 2,
	AnimAttributes                 = 4,
	EOptimusDataTypeUsageFlags_MAX = 5,
};

enum class EOptimusDataTypeFlags : uint8
{
	None                           = 0,
	IsStructType                   = 1,
	ShowElements                   = 2,
	EOptimusDataTypeFlags_MAX      = 3,
};

enum class EOptimusDeformerStatus : int32
{
	Compiled                       = 0,
	CompiledWithWarnings           = 1,
	Modified                       = 2,
	HasErrors                      = 3,
	EOptimusDeformerStatus_MAX     = 4,
};

enum class EOptimusNodeGraphType : int32
{
	Setup                          = 0,
	Update                         = 1,
	ExternalTrigger                = 2,
	Function                       = 3,
	SubGraph                       = 4,
	Transient                      = 5,
	EOptimusNodeGraphType_MAX      = 6,
};

enum class EOptimusNodePinStorageType : uint8
{
	Value                          = 0,
	Resource                       = 1,
	EOptimusNodePinStorageType_MAX = 2,
};

enum class EOptimusNodePinDirection : uint8
{
	Unknown                        = 0,
	Input                          = 1,
	Output                         = 2,
	EOptimusNodePinDirection_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct OptimusCore.OptimusExecutionDomain
struct FOptimusExecutionDomain
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusDataTypeRef
struct FOptimusDataTypeRef
{
public:
	class FName                                  TypeName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                TypeObject;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.Optimus_ShaderBinding
struct FOptimus_ShaderBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct OptimusCore.OptimusValidatedName
struct FOptimusValidatedName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OptimusCore.OptimusDataDomain
struct FOptimusDataDomain
{
public:
	enum class EOptimusDataDomainType            Type;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4496[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DimensionNames;                                    // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Multiplier;                                        // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4498[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Expression;                                        // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          LevelNames;                                        // 0x30(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusParameterBinding
struct FOptimusParameterBinding
{
public:
	struct FOptimusValidatedName                 Name;                                              // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x18(0x40)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusParameterBindingArray
struct FOptimusParameterBindingArray
{
public:
	TArray<struct FOptimusParameterBinding>      InnerArray;                                        // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OptimusCore.OptimusShaderText
struct FOptimusShaderText
{
public:
	class FString                                Declarations;                                      // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShaderText;                                        // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusAction
struct FOptimusAction
{
public:
	uint8                                        Pad_449A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusCompoundAction
struct FOptimusCompoundAction : public FOptimusAction
{
public:
	uint8                                        Pad_449B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x30 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_AddBinding
struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction
{
public:
	uint8                                        Pad_449C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_RemoveBinding
struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
{
public:
	uint8                                        Pad_449D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_RenameBinding
struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
{
public:
	uint8                                        Pad_449E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusComponentBindingAction_SetComponentSource
struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
{
public:
	uint8                                        Pad_449F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_RenameNode
struct FOptimusNodeAction_RenameNode : public FOptimusAction
{
public:
	uint8                                        Pad_44A0[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_MoveNode
struct FOptimusNodeAction_MoveNode : public FOptimusAction
{
public:
	uint8                                        Pad_44A2[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinValue
struct FOptimusNodeAction_SetPinValue : public FOptimusAction
{
public:
	uint8                                        Pad_44A3[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinName
struct FOptimusNodeAction_SetPinName : public FOptimusAction
{
public:
	uint8                                        Pad_44A4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinType
struct FOptimusNodeAction_SetPinType : public FOptimusAction
{
public:
	uint8                                        Pad_44A5[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xA8 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_SetPinDataDomain
struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
{
public:
	uint8                                        Pad_44A6[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xB8 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_AddRemovePin
struct FOptimusNodeAction_AddRemovePin : public FOptimusAction
{
public:
	uint8                                        Pad_44A7[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct OptimusCore.OptimusNodeAction_AddPin
struct FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin
{
public:
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct OptimusCore.OptimusNodeAction_AddGroupingPin
struct FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin
{
public:
};

// 0x0 (0xB8 - 0xB8)
// ScriptStruct OptimusCore.OptimusNodeAction_RemovePin
struct FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeAction_MovePin
struct FOptimusNodeAction_MovePin : public FOptimusAction
{
public:
	uint8                                        Pad_44A9[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x90 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddGraph
struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction
{
public:
	uint8                                        Pad_44AB[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveGraph
struct FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
{
public:
	uint8                                        Pad_44AD[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RenameGraph
struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
{
public:
	uint8                                        Pad_44AE[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddNode
struct FOptimusNodeGraphAction_AddNode : public FOptimusAction
{
public:
	uint8                                        Pad_44B0[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_DuplicateNode
struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
{
public:
	uint8                                        Pad_44B2[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x60 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveNode
struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
{
public:
	uint8                                        Pad_44B3[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddRemoveLink
struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{
public:
	uint8                                        Pad_44B4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x40 - 0x40)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_AddLink
struct FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveLink
struct FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink
{
public:
};

// 0x68 (0xA8 - 0x40)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_ConnectAdderPin
struct FOptimusNodeGraphAction_ConnectAdderPin : public FOptimusNodeGraphAction_AddRemoveLink
{
public:
	uint8                                        Pad_44B8[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xB0 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
struct FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction
{
public:
	uint8                                        Pad_44B9[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x60 - 0x18)
// ScriptStruct OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
{
public:
	uint8                                        Pad_44BB[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x70 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_AddResource
struct FOptimusResourceAction_AddResource : public FOptimusAction
{
public:
	uint8                                        Pad_44BC[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_RemoveResource
struct FOptimusResourceAction_RemoveResource : public FOptimusAction
{
public:
	uint8                                        Pad_44BE[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_RenameResource
struct FOptimusResourceAction_RenameResource : public FOptimusAction
{
public:
	uint8                                        Pad_44BF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_SetDataType
struct FOptimusResourceAction_SetDataType : public FOptimusAction
{
public:
	uint8                                        Pad_44C0[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xA0 - 0x18)
// ScriptStruct OptimusCore.OptimusResourceAction_SetDataDomain
struct FOptimusResourceAction_SetDataDomain : public FOptimusAction
{
public:
	uint8                                        Pad_44C3[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x30 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_AddVariable
struct FOptimusVariableAction_AddVariable : public FOptimusAction
{
public:
	uint8                                        Pad_44C4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x58 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_RemoveVariable
struct FOptimusVariableAction_RemoveVariable : public FOptimusAction
{
public:
	uint8                                        Pad_44C6[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_RenameVariable
struct FOptimusVariableAction_RenameVariable : public FOptimusAction
{
public:
	uint8                                        Pad_44C7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x40 - 0x18)
// ScriptStruct OptimusCore.OptimusVariableAction_SetDataType
struct FOptimusVariableAction_SetDataType : public FOptimusAction
{
public:
	uint8                                        Pad_44C8[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OptimusCore.OptimusAnimAttributeDescription
struct FOptimusAnimAttributeDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UOptimusValueContainer*                DefaultValue;                                      // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HlslId;                                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PinName;                                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusAnimAttributeArray
struct FOptimusAnimAttributeArray
{
public:
	TArray<struct FOptimusAnimAttributeDescription> InnerArray;                                        // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct OptimusCore.OptimusDebugDrawParameters
struct FOptimusDebugDrawParameters
{
public:
	bool                                         bForceEnable;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxLineCount;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTriangleCount;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCharacterCount;                                 // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OptimusCore.OptimusGraphVariableDescription
struct FOptimusGraphVariableDescription
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShaderValueTypeHandle                ValueType;                                         // 0x10(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Value;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusSecondaryInputBindingsGroup
struct FOptimusSecondaryInputBindingsGroup
{
public:
	struct FOptimusValidatedName                 GroupName;                                         // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptimusParameterBindingArray         BindingArray;                                      // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct OptimusCore.OptimusNode_GetVariable_DuplicationInfo
struct FOptimusNode_GetVariable_DuplicationInfo
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{
public:
	class FName                                  ResourceName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x18(0x40)(NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OptimusCore.OptimusDataType
struct FOptimusDataType
{
public:
	class FName                                  TypeName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(NativeAccessSpecifierPublic)
	struct FShaderValueTypeHandle                ShaderValueType;                                   // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShaderValueSize;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeCategory;                                      // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                TypeObject;                                        // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasCustomPinColor;                                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CustomPinColor;                                    // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOptimusDataTypeUsageFlags        UsageFlags;                                        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOptimusDataTypeFlags             TypeFlags;                                         // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44D4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusComputeGraphInfo
struct FOptimusComputeGraphInfo
{
public:
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GraphName;                                         // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOptimusComputeGraph*                  ComputeGraph;                                      // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OptimusCore.OptimusDeformerInstanceExecInfo
struct FOptimusDeformerInstanceExecInfo
{
public:
	class FName                                  GraphName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UComputeGraph*                         ComputeGraph;                                      // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComputeGraphInstance                 ComputeGraphInstance;                              // 0x18(0x18)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OptimusCore.OptimusDeformerInstanceComponentBinding
struct FOptimusDeformerInstanceComponentBinding
{
public:
	class FName                                  ProviderName;                                      // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentName;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OptimusCore.OptimusVariableMetaDataEntry
struct FOptimusVariableMetaDataEntry
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


