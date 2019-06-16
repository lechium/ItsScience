//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HSFileManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000001013c08e8
- (id)getExtensionFromData:(id)arg1;	// IMP=0x00000001013c09b4
- (id)init;	// IMP=0x00000001013c099c
- (id)initCuston;	// IMP=0x00000001013c0968
- (id)fileNameFromWebURL:(id)arg1;	// IMP=0x00000001013c076c
- (void)deleteResumeDataForWebURL:(id)arg1;	// IMP=0x00000001013c0630
- (void)deleteFileForWebURL:(id)arg1;	// IMP=0x00000001013c04ec
- (_Bool)copyFileFromLocation:(id)arg1 toDestination:(id)arg2;	// IMP=0x00000001013c0444
- (id)partialStorageDirectory;	// IMP=0x00000001013c0368
- (id)storageDirectoryWithName:(id)arg1;	// IMP=0x00000001013c025c
- (id)tempPath;	// IMP=0x00000001013c01c0
- (id)tempDataWithName:(id)arg1;	// IMP=0x00000001013c00ac
- (id)saveTempData:(id)arg1 withName:(id)arg2;	// IMP=0x00000001013bff9c
- (void)removeDataAtPath:(id)arg1;	// IMP=0x00000001013bfe84
- (id)getDataAtPath:(id)arg1;	// IMP=0x00000001013bfe1c
- (id)saveData:(id)arg1 withName:(id)arg2 atPath:(id)arg3;	// IMP=0x00000001013bfcb8
- (id)resumeDataForWebURL:(id)arg1;	// IMP=0x00000001013bfb80
- (id)filePathForWebURL:(id)arg1;	// IMP=0x00000001013bfa58
- (id)storeResumeData:(id)arg1 forWebURL:(id)arg2;	// IMP=0x00000001013bf90c
- (id)storeData:(id)arg1 forWebURL:(id)arg2;	// IMP=0x00000001013bf7b8
- (id)storeFileWithTempLocation:(id)arg1 forWebURL:(id)arg2;	// IMP=0x00000001013bf668

@end
