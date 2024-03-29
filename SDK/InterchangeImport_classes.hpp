#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeAnimationPayloadInterface
class IInterchangeAnimationPayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeAnimationPayloadInterface* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeAnimationTrackSetFactory
class UInterchangeAnimationTrackSetFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_34B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackSetFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeBlockedTexturePayloadInterface
class IInterchangeBlockedTexturePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeBlockedTexturePayloadInterface* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeActorFactory
class UInterchangeActorFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeLightActorFactory
class UInterchangeLightActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeLightActorFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeMeshPayloadInterface
class IInterchangeMeshPayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeMeshPayloadInterface* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeSceneImportAssetFactory
class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSceneImportAssetFactory* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeSceneVariantSetsFactory
class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_34BC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeSceneVariantSetsFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeSlicedTexturePayloadInterface
class IInterchangeSlicedTexturePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeSlicedTexturePayloadInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeTextureLightProfilePayloadInterface
class IInterchangeTextureLightProfilePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeTextureLightProfilePayloadInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeTexturePayloadInterface
class IInterchangeTexturePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeTexturePayloadInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeVariantSetPayloadInterface
class IInterchangeVariantSetPayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeVariantSetPayloadInterface* GetDefaultObj();

};

// 0xD0 (0x180 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRamp4
class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression
{
public:
	struct FExpressionInput                      Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      C;                                                 // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      D;                                                 // 0x150(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRamp4* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeAnimSequenceFactory
class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeAnimSequenceFactory* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class InterchangeImport.InterchangeFbxTranslator
class UInterchangeFbxTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_34C3[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeFbxTranslator* GetDefaultObj();

};

// 0x240 (0x278 - 0x38)
// Class InterchangeImport.InterchangeGLTFTranslator
class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_34C5[0x240];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeGLTFTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangeMaterialXTranslator
class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_34C6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeMaterialXTranslator* GetDefaultObj();

};

// 0x78 (0x128 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXAppend3Vector
class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      C;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXAppend3Vector* GetDefaultObj();

};

// 0xA0 (0x150 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXAppend4Vector
class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      C;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      D;                                                 // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXAppend4Vector* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXBurn
class UMaterialExpressionMaterialXBurn : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXBurn* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXDifference
class UMaterialExpressionMaterialXDifference : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXDifference* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXDisjointOver
class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXDisjointOver* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXDodge
class UMaterialExpressionMaterialXDodge : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXDodge* GetDefaultObj();

};

// 0xF8 (0x1A8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXFractal3D
class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression
{
public:
	struct FExpressionInput                      Position;                                          // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Amplitude;                                         // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAmplitude;                                    // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      Octaves;                                           // 0x108(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ConstOctaves;                                      // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      Lacunarity;                                        // 0x138(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstLacunarity;                                   // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      Diminish;                                          // 0x168(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstDiminish;                                     // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurbulence;                                       // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Levels;                                            // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutputMin;                                         // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutputMax;                                         // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXFractal3D* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXIn
class UMaterialExpressionMaterialXIn : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXIn* GetDefaultObj();

};

// 0x40 (0xF0 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXLuminance
class UMaterialExpressionMaterialXLuminance : public UMaterialExpression
{
public:
	struct FExpressionInput                      Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          LuminanceFactors;                                  // 0xD8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialXLuminanceMode           LuminanceMode;                                     // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXLuminance* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXMask
class UMaterialExpressionMaterialXMask : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34FB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXMask* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXMatte
class UMaterialExpressionMaterialXMatte : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3500[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXMatte* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXMinus
class UMaterialExpressionMaterialXMinus : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3503[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXMinus* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXOut
class UMaterialExpressionMaterialXOut : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXOut* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXOver
class UMaterialExpressionMaterialXOver : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3513[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXOver* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXOverlay
class UMaterialExpressionMaterialXOverlay : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXOverlay* GetDefaultObj();

};

// 0xD0 (0x180 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXPlace2D
class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression
{
public:
	struct FExpressionInput                      Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Pivot;                                             // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Scale;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Offset;                                            // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      RotationAngle;                                     // 0x150(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstRotationAngle;                                // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x17C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3525[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXPlace2D* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXPlus
class UMaterialExpressionMaterialXPlus : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_352F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXPlus* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXPremult
class UMaterialExpressionMaterialXPremult : public UMaterialExpression
{
public:
	struct FExpressionInput                      Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXPremult* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRampLeftRight
class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_353A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRampLeftRight* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRampTopBottom
class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression
{
public:
	struct FExpressionInput                      Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_353E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRampTopBottom* GetDefaultObj();

};

// 0xD8 (0x188 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRemap
class UMaterialExpressionMaterialXRemap : public UMaterialExpression
{
public:
	struct FExpressionInput                      Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      InputLow;                                          // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      InputHigh;                                         // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      TargetLow;                                         // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      TargetHigh;                                        // 0x150(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        InputLowDefault;                                   // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputHighDefault;                                  // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetLowDefault;                                  // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetHighDefault;                                 // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRemap* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRotate2D
class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression
{
public:
	struct FExpressionInput                      Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      RotationAngle;                                     // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstRotationAngle;                                // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3551[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRotate2D* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXScreen
class UMaterialExpressionMaterialXScreen : public UMaterialExpression
{
public:
	struct FExpressionInput                      A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ALPHA;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3554[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXScreen* GetDefaultObj();

};

// 0xA8 (0x158 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Center;                                            // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstCenter;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3556[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXSplitLeftRight* GetDefaultObj();

};

// 0xA8 (0x158 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression
{
public:
	struct FExpressionInput                      Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Center;                                            // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstCenter;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_355C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXSplitTopBottom* GetDefaultObj();

};

// 0x38 (0xE8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXSwizzle
class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression
{
public:
	struct FExpressionInput                      Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Channels;                                          // 0xD8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXSwizzle* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D
{
public:
	enum class EMAterialXTextureSampleBlurKernel KernelSize;                                        // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterSize;                                        // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterOffset;                                      // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialXTextureSampleBlurFilter Filter;                                            // 0x24C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3564[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXTextureSampleParameterBlur* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXUnpremult
class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression
{
public:
	struct FExpressionInput                      Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXUnpremult* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeMaterialFactory
class UInterchangeMaterialFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_3565[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeMaterialFactory* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeMaterialFunctionFactory
class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_3569[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeMaterialFunctionFactory* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class InterchangeImport.InterchangeOBJTranslator
class UInterchangeOBJTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_3570[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeOBJTranslator* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangePhysicsAssetFactory
class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangePhysicsAssetFactory* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class InterchangeImport.InterchangeSkeletalMeshFactory
class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_3575[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeSkeletalMeshFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeSkeletonFactory
class UInterchangeSkeletonFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSkeletonFactory* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class InterchangeImport.InterchangeStaticMeshFactory
class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_357B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeStaticMeshFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeCineCameraActorFactory
class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeCineCameraActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeCameraActorFactory
class UInterchangeCameraActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeCameraActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeSkeletalMeshActorFactory
class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSkeletalMeshActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeStaticMeshActorFactory
class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeStaticMeshActorFactory* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class InterchangeImport.InterchangeDDSTranslator
class UInterchangeDDSTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_357F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeDDSTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangeIESTranslator
class UInterchangeIESTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_3581[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeIESTranslator* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class InterchangeImport.InterchangeImageWrapperTranslator
class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_3582[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeImageWrapperTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangeJPGTranslator
class UInterchangeJPGTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_3584[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeJPGTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangePCXTranslator
class UInterchangePCXTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_3586[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangePCXTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangePSDTranslator
class UInterchangePSDTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_3588[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangePSDTranslator* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class InterchangeImport.InterchangeTextureFactory
class UInterchangeTextureFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_358A[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterchangeTextureFactory* GetDefaultObj();

};

}


