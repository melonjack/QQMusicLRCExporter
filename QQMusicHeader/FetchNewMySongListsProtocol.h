//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface FetchNewMySongListsProtocol : ProtocolBaseJason
{
    NSArray *_taoFolderResultArray;
    NSArray *_taoFolderNeedUpArray;
    NSArray *_myFolderArray;
    NSArray *_ordersArray;
    NSArray *_folders;
    unsigned long _uin;
}

@property(nonatomic) unsigned long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSArray *folders; // @synthesize folders=_folders;
@property(retain, nonatomic) NSArray *ordersArray; // @synthesize ordersArray=_ordersArray;
@property(retain, nonatomic) NSArray *myFolderArray; // @synthesize myFolderArray=_myFolderArray;
@property(retain, nonatomic) NSArray *taoFolderNeedUpArray; // @synthesize taoFolderNeedUpArray=_taoFolderNeedUpArray;
@property(retain, nonatomic) NSArray *taoFolderResultArray; // @synthesize taoFolderResultArray=_taoFolderResultArray;
- (void).cxx_destruct;
- (id)putLoveFolderToFirst:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getFolderList;
- (void)startWork;
- (BOOL)canReportError;
- (id)getUrl;
- (id)initWithUin:(unsigned long)arg1;

@end

