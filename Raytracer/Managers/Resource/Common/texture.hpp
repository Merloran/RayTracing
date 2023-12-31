#pragma once

enum class ETextureType : Int8 
{
	None			 = 0,

	Albedo			 = 0b00000001,
	Normal			 = 0b00000010,
	Roughness		 = 0b00000100,
	Metalness		 = 0b00001000,
	AmbientOcclusion = 0b00010000,
	Emission		 = 0b00100000,
	Height			 = 0b01000000,
	Opacity			 = 0b10000000,

	RM				 = Roughness | Metalness,
	RMAO			 = Roughness | Metalness | AmbientOcclusion,

	TypesCount		 = 10,
};

struct Texture 
{
	UInt8* data;
	glm::ivec2 size;
	Int32 channels;
	UInt32 gpuId{0};
	UInt64 bindlessId{0};
	ETextureType type = ETextureType::None;
	std::string name;
};