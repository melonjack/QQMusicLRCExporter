//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WloginMbPhoneInfo : NSObject
{
    NSString *sProtectInfo;
    NSString *sCountryCode;
    NSString *sPhoneNo;
    unsigned int dwMbPhoneStatus;
    unsigned short wAvailMsgCnt;
    unsigned short wTimeLimit;
    unsigned short wMbGuideType;
    NSString *sMbGuideMsg;
    unsigned short wMbGuideInfoType;
    NSString *sMbGuideInfo;
    NSString *sUnionVerifyUrl;
}

@property(copy) NSString *sUnionVerifyUrl; // @synthesize sUnionVerifyUrl;
@property(copy) NSString *sMbGuideInfo; // @synthesize sMbGuideInfo;
@property unsigned short wMbGuideInfoType; // @synthesize wMbGuideInfoType;
@property(copy) NSString *sMbGuideMsg; // @synthesize sMbGuideMsg;
@property unsigned short wMbGuideType; // @synthesize wMbGuideType;
@property unsigned short wTimeLimit; // @synthesize wTimeLimit;
@property unsigned short wAvailMsgCnt; // @synthesize wAvailMsgCnt;
@property unsigned int dwMbPhoneStatus; // @synthesize dwMbPhoneStatus;
@property(copy) NSString *sPhoneNo; // @synthesize sPhoneNo;
@property(copy) NSString *sCountryCode; // @synthesize sCountryCode;
@property(copy) NSString *sProtectInfo; // @synthesize sProtectInfo;
- (void)dealloc;

@end
