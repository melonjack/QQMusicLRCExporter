//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class Cluster, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FriendShareProtocol : ProtocolBaseJason
{
    BOOL bRefresh;
    Cluster *_cluster;
    NSMutableArray *_resultArray;
}

@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) Cluster *cluster; // @synthesize cluster=_cluster;
@property(nonatomic) BOOL bRefresh; // @synthesize bRefresh;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end

