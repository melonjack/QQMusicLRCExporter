//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class CategoricalSongFolderListItem, ListBase;

__attribute__((visibility("hidden")))
@interface CategoryDetailProtocol : ProtocolBaseJason
{
    CategoricalSongFolderListItem *_cluster;
    int _queryType;
    ListBase *_list;
}

@property(retain, nonatomic) ListBase *list; // @synthesize list=_list;
@property(nonatomic) int queryType; // @synthesize queryType=_queryType;
@property(retain, nonatomic) CategoricalSongFolderListItem *cluster; // @synthesize cluster=_cluster;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (BOOL)canReportError;
- (int)cid;

@end

