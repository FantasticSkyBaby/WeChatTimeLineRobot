/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ActionComment : XXUnknownSuperclass <NSCoding> {
	NSString* _imageUrl;
	NSString* _nickName;
	NSString* _content;
	NSString* _link;
}
@property(retain, nonatomic) NSString* link;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* nickName;
@property(retain, nonatomic) NSString* imageUrl;
-(void).cxx_destruct;
-(id)toXml;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end
