//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BuluoCluster : ClusterInfo
{
    BOOL _showFlag;
    unsigned long _singerId;
    unsigned long _buluoId;
    NSString *_buluoName;
    NSString *_jumpUrl;
}

+ (id)translateToBuluoClusterFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *buluoName; // @synthesize buluoName=_buluoName;
@property(nonatomic) unsigned long buluoId; // @synthesize buluoId=_buluoId;
@property(nonatomic) unsigned long singerId; // @synthesize singerId=_singerId;
@property(nonatomic) BOOL showFlag; // @synthesize showFlag=_showFlag;
- (void).cxx_destruct;

@end

