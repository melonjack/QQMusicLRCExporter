//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HostIpTable : NSObject
{
    BOOL _hostIsIpFormat;
    NSString *_hostOriginal;
    NSString *_hostReplacedTo;
    NSString *_ip;
    int _httpResponseCode;
}

@property int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
@property BOOL hostIsIpFormat; // @synthesize hostIsIpFormat=_hostIsIpFormat;
@property(retain) NSString *ip; // @synthesize ip=_ip;
@property(retain) NSString *hostReplacedTo; // @synthesize hostReplacedTo=_hostReplacedTo;
@property(retain) NSString *hostOriginal; // @synthesize hostOriginal=_hostOriginal;
- (void).cxx_destruct;
- (id)description;

@end

