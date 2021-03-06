//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ImageManagerDelegate.h"
#import "NSCopying.h"

@class AsynDBCall, NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ListBase : NSObject <ImageManagerDelegate, NSCopying>
{
    BOOL bNeedSort;
    NSObject *key;
    int listType;
    int listTag;
    NSArray *listData;
    NSMutableArray *exListData;
    NSDictionary *dbInfo;
    id <ListBaseDBProtocol> dbProtocol;
    NSMutableArray *callbacks;
    AsynDBCall *asynDBCall;
    BOOL asyning;
    int _listPlayMode;
}

+ (id)getDbSongsByFolder:(id)arg1;
+ (id)createExpInfosWithLength:(unsigned int)arg1;
@property(nonatomic) int listPlayMode; // @synthesize listPlayMode=_listPlayMode;
@property(nonatomic) BOOL bNeedSort; // @synthesize bNeedSort;
@property(nonatomic) int listTag; // @synthesize listTag;
@property(readonly, nonatomic) NSArray *callbacks; // @synthesize callbacks;
@property(nonatomic) __weak id <ListBaseDBProtocol> dbProtocol; // @synthesize dbProtocol;
@property(retain, nonatomic) NSDictionary *dbInfo; // @synthesize dbInfo;
@property(retain, nonatomic) NSMutableArray *exListData; // @synthesize exListData;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData;
@property(nonatomic) int listType; // @synthesize listType;
@property(retain, nonatomic) NSObject *key; // @synthesize key;
@property BOOL asyning; // @synthesize asyning;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak AsynDBCall *asynDBCall;
- (void)addCallback:(id)arg1;
- (void)removeCallback:(id)arg1;
- (void)removeAllCallbacks;
- (void)addTag:(id)arg1;
- (void)removeTag:(id)arg1;
@property(nonatomic) BOOL useDefaultDB;
- (void)fireMainThreadOnListChangeType:(id)arg1;
- (void)mainThreadFireOnListChange:(int)arg1 Index:(int)arg2;
- (void)fireOnListWithResult:(int)arg1 AndAct:(id)arg2;
- (void)fireOnListInfoChangeBy:(id)arg1 ChangeType:(int)arg2 Index:(unsigned int)arg3;
- (void)fireOnListChange:(int)arg1 Index:(int)arg2 Info:(id)arg3;
- (void)fireInfo:(id)arg1 Change:(int)arg2;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)dataFromListBase:(id)arg1;
- (void)updateListData:(id)arg1 expInfo:(id)arg2;
- (void)deleteInfoByIndex:(int)arg1;
- (void)deleteInfos:(id)arg1;
- (void)deleteInfo:(id)arg1;
- (void)insertInfos:(id)arg1;
- (void)insertInfos:(id)arg1 expInfos:(id)arg2;
- (void)updateInfo:(id)arg1;
- (void)updateInfo:(id)arg1 expInfo:(id)arg2;
- (void)insertInfo:(id)arg1;
- (void)insertInfo:(id)arg1 expInfo:(id)arg2;
- (void)replaceDictionary:(id)arg1 key:(id)arg2;
- (void)asynLoadDBDataWithCallback:(CDUnknownBlockType)arg1;
- (void)loadDBData;
@property(readonly, nonatomic) __weak NSArray *allSongs;
- (void)dealloc;
- (void)clearData;
- (id)cloneData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getBackupListData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

