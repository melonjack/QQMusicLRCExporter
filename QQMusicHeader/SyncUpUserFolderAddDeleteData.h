//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FolderInfo;

__attribute__((visibility("hidden")))
@interface SyncUpUserFolderAddDeleteData : NSObject
{
    int _synType;
    FolderInfo *_folderInfo;
}

@property(retain, nonatomic) FolderInfo *folderInfo; // @synthesize folderInfo=_folderInfo;
@property(nonatomic) int synType; // @synthesize synType=_synType;
- (void).cxx_destruct;
- (void)dealloc;

@end

