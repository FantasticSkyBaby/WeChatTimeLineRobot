/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface UploadHDHeadImgResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* smallHeadImgUrl;
@property(retain, nonatomic) NSString* bigHeadImgUrl;
@property(retain, nonatomic) NSString* finalImgMd5Sum;
@property(assign, nonatomic) unsigned startPos;
@property(assign, nonatomic) unsigned totalLen;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
