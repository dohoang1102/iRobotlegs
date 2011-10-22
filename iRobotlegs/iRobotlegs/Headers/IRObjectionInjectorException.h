//
//  IRObjectionInjectorException.h
//  iRobotlegs
//
//  Created by Pedr Browne on 29/09/2011.
//  Copyright (c) 2011 the original author or authors
//  Based on the Robotlegs Framework for Actionscript 3: http://www.robotlegs.org
//  Permission is hereby granted to use, modify, and distribute this file 
//  in accordance with the terms of the license agreement accompanying it.
//

#import <Foundation/Foundation.h>

extern NSString *const E_INJECTOR_MUST_SUBCLASS_NAME; 
extern NSString *const E_INJECTOR_MUST_SUBCLASS_REASON;

@interface IRObjectionInjectorException : NSException

@end