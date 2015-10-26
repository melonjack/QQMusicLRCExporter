//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdObjTransToJceBufferProtocol.h"

@class NSArray, NSDictionary, NSString, RqdMobileInfo;

@interface RqdUserInfoPackage : NSObject <RqdObjTransToJceBufferProtocol>
{
    NSString *guid;
    NSString *proceName;
    NSString *imei;
    NSString *mac;
    NSDictionary *valueMap;
    NSString *idfv;
    int type;
    NSArray *summaryInfos;
    RqdMobileInfo *mobileDetail;
}

@property(retain, nonatomic) RqdMobileInfo *mobileDetail; // @synthesize mobileDetail;
@property(retain, nonatomic) NSString *idfv; // @synthesize idfv;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSArray *summaryInfos; // @synthesize summaryInfos;
@property(retain, nonatomic) NSDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSString *mac; // @synthesize mac;
@property(retain, nonatomic) NSString *imei; // @synthesize imei;
@property(retain, nonatomic) NSString *proceName; // @synthesize proceName;
@property(retain, nonatomic) NSString *guid; // @synthesize guid;
- (void)dealloc;
- (void)createWUPModel:(struct UserInfoPackage *)arg1;
- (void)setDataToBuffer:(JceOutputStream_6f42a06c *)arg1;

@end
