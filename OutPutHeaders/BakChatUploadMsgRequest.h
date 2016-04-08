/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"
#import "NSCoding.h"

@class SKBuiltinBuffer_t, BakChatMsgList, NSString, BaseRequest;

@interface BakChatUploadMsgRequest : WXPBGeneratedMessage <NSCoding> {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* dataBuffer;
@property(assign, nonatomic) unsigned dataLen;
@property(assign, nonatomic) unsigned bakChatSvrId;
@property(retain, nonatomic) BakChatMsgList* data;
@property(retain, nonatomic) NSString* clientMsgId;
@property(retain, nonatomic) NSString* bakChatClientId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
