//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ReqSongRecordId : NSObject
{
    int m_eReqType;
    int m_iReqSeq;
}

@property(nonatomic) int m_iReqSeq; // @synthesize m_iReqSeq;
@property(nonatomic) int m_eReqType; // @synthesize m_eReqType;
- (id)initWithReqTypeAndReqSeq:(int)arg1 iReqSeq:(int)arg2;

@end

