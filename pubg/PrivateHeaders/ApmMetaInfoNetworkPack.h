//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ApmMetaInfoNetworkPack : NSObject
{
    unsigned short _randomSeed;	// 8 = 0x8
    unsigned short _wOsType;	// 10 = 0xa
    unsigned short _wOsLevel;	// 12 = 0xc
    unsigned int _dwMem;	// 16 = 0x10
    unsigned int _dwCpuCore;	// 20 = 0x14
    unsigned int _dwCpuFreq;	// 24 = 0x18
    unsigned int _dwDatasz;	// 28 = 0x1c
    NSString *_szUserID;	// 32 = 0x20
    NSString *_szAppID;	// 40 = 0x28
    NSString *_szAppVersion;	// 48 = 0x30
    NSString *_szBuildVersion;	// 56 = 0x38
    NSString *_szSystemVersion;	// 64 = 0x40
    unsigned long long _ullImei;	// 72 = 0x48
    unsigned long long _ullMac;	// 80 = 0x50
    NSString *_szAppFrom;	// 88 = 0x58
    long long _tLaunchTime;	// 96 = 0x60
    NSString *_szManu;	// 104 = 0x68
    NSString *_szModel;	// 112 = 0x70
    NSString *_szCpuArch;	// 120 = 0x78
    NSString *_szGpuVendor;	// 128 = 0x80
    NSString *_szGpuRenderer;	// 136 = 0x88
    NSString *_szGpuVersion;	// 144 = 0x90
    unsigned long long _uDeviceTotalSpace;	// 152 = 0x98
    unsigned long long _uDeviceUsedSpace;	// 160 = 0xa0
    unsigned long long _uDeviceFreeSpace;	// 168 = 0xa8
}

+ (id)sharedApmMetaInfoNetworkPack;	// IMP=0x00000001011358b4
@property(nonatomic) unsigned long long uDeviceFreeSpace; // @synthesize uDeviceFreeSpace=_uDeviceFreeSpace;
@property(nonatomic) unsigned long long uDeviceUsedSpace; // @synthesize uDeviceUsedSpace=_uDeviceUsedSpace;
@property(nonatomic) unsigned long long uDeviceTotalSpace; // @synthesize uDeviceTotalSpace=_uDeviceTotalSpace;
@property(nonatomic) unsigned int dwDatasz; // @synthesize dwDatasz=_dwDatasz;
@property(copy, nonatomic) NSString *szGpuVersion; // @synthesize szGpuVersion=_szGpuVersion;
@property(copy, nonatomic) NSString *szGpuRenderer; // @synthesize szGpuRenderer=_szGpuRenderer;
@property(copy, nonatomic) NSString *szGpuVendor; // @synthesize szGpuVendor=_szGpuVendor;
@property(copy, nonatomic) NSString *szCpuArch; // @synthesize szCpuArch=_szCpuArch;
@property(nonatomic) unsigned int dwCpuFreq; // @synthesize dwCpuFreq=_dwCpuFreq;
@property(nonatomic) unsigned int dwCpuCore; // @synthesize dwCpuCore=_dwCpuCore;
@property(nonatomic) unsigned int dwMem; // @synthesize dwMem=_dwMem;
@property(nonatomic) unsigned short wOsLevel; // @synthesize wOsLevel=_wOsLevel;
@property(copy, nonatomic) NSString *szModel; // @synthesize szModel=_szModel;
@property(copy, nonatomic) NSString *szManu; // @synthesize szManu=_szManu;
@property(nonatomic) long long tLaunchTime; // @synthesize tLaunchTime=_tLaunchTime;
@property(copy, nonatomic) NSString *szAppFrom; // @synthesize szAppFrom=_szAppFrom;
@property(nonatomic) unsigned short wOsType; // @synthesize wOsType=_wOsType;
@property(nonatomic) unsigned long long ullMac; // @synthesize ullMac=_ullMac;
@property(nonatomic) unsigned long long ullImei; // @synthesize ullImei=_ullImei;
@property(nonatomic) unsigned short randomSeed; // @synthesize randomSeed=_randomSeed;
@property(copy, nonatomic) NSString *szSystemVersion; // @synthesize szSystemVersion=_szSystemVersion;
@property(copy, nonatomic) NSString *szBuildVersion; // @synthesize szBuildVersion=_szBuildVersion;
@property(copy, nonatomic) NSString *szAppVersion; // @synthesize szAppVersion=_szAppVersion;
@property(copy, nonatomic) NSString *szAppID; // @synthesize szAppID=_szAppID;
@property(copy, nonatomic) NSString *szUserID; // @synthesize szUserID=_szUserID;
- (void).cxx_destruct;	// IMP=0x0000000101135c68

@end
