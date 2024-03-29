#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
struct FScriptTypedElementHandle
{
public:
	uint8                                        Pad_105A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
struct FTypedElementDataStorageColumn
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementUObjectColumn
struct FTypedElementUObjectColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_105B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementExternalObjectColumn
struct FTypedElementExternalObjectColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_105C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
struct FTypedElementDataStorageTag
{
public:
	uint8                                        Pad_105D[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
struct FTypedElementWidgetConstructor
{
public:
	uint8                                        Pad_105E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementLabelColumn
struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn
{
public:
	class FString                                Label;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
struct FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
{
public:
	uint64                                       LabelHash;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
struct FScriptTypedElementListProxy
{
public:
	uint8                                        Pad_1062[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
{
public:
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSyncFromWorldTag
struct FTypedElementSyncFromWorldTag : public FTypedElementDataStorageTag
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementRowReferenceColumn
struct FTypedElementRowReferenceColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_1065[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_1069[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementSelectionColumn
struct FTypedElementSelectionColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_106A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_106D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementClassTypeInfoColumn
struct FTypedElementClassTypeInfoColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_1070[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementScriptStructTypeInfoColumn
struct FTypedElementScriptStructTypeInfoColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_1072[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementU64IntValueCacheColumn
struct FTypedElementU64IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint64                                       Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementI64IntValueCacheColumn
struct FTypedElementI64IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementViewportColorColumn
struct FTypedElementViewportColorColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        SelectionOutlineColorIndex;                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


