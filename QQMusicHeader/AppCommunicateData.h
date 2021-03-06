//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString;

@interface AppCommunicateData : NSObject
{
    unsigned int _command;
    NSMutableDictionary *_dictionaryData;
    NSData *_fileData;
    BOOL _returnFromApp;
    NSString *_conversationAccount;
    int _result;
    int _scene;
    NSString *_openID;
    NSString *_sdkVer;
    NSString *_lang;
    NSString *_country;
}

@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSString *sdkVer; // @synthesize sdkVer=_sdkVer;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) BOOL returnFromApp; // @synthesize returnFromApp=_returnFromApp;
@property(retain, nonatomic) NSString *conversationAccount; // @synthesize conversationAccount=_conversationAccount;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (BOOL)RespToData:(id)arg1;
- (BOOL)ReqToData:(id)arg1 withMediaInternalMessage:(id)arg2;
- (BOOL)ReqToData:(id)arg1;
- (id)DataToResp;
- (id)DataToReq;
- (BOOL)MakeMediaInternalMessage:(id)arg1;
- (id)mediaInternalMessage;
- (BOOL)MakeMediaMessage:(id)arg1;
- (BOOL)MakeLinkObject:(id)arg1;
- (id)mediaMessage;
- (BOOL)MakeTextMessage:(id)arg1;
- (id)textMessage;
- (BOOL)MakeAuthResp:(id)arg1;
- (id)authResp;
- (BOOL)MakeAuthRequest:(id)arg1;
- (id)authRequest;
- (BOOL)MakeCommand:(unsigned int)arg1;
- (void)initCommonField:(unsigned int)arg1;
- (unsigned int)command;
- (id)propertList;
- (id)initWithPropertList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

