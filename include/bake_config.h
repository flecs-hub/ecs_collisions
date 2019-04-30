/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef ECS_COLLISIONS_BAKE_CONFIG_H
#define ECS_COLLISIONS_BAKE_CONFIG_H

/* Generated includes are specific to the bake environment. If a project is not
 * built with bake, it will have to provide alternative methods for including
 * its dependencies. */
#ifdef __BAKE__
/* Headers of public dependencies */
#include <flecs>
#include <flecs.components.transform>
#include <flecs.components.physics>
#include <flecs.components.geometry>
#include <flecs.components.graphics>
#include <flecs.systems.physics>
#include <flecs.systems.sdl2>
#include <flecs.systems.civetweb>
#include <flecs.systems.admin>

/* Headers of private dependencies */
#ifdef ECS_COLLISIONS_IMPL
/* No dependencies */
#endif
#endif

/* Convenience macro for exporting symbols */
#ifndef ECS_COLLISIONS_STATIC
  #if ECS_COLLISIONS_IMPL && defined _MSC_VER
    #define ECS_COLLISIONS_EXPORT __declspec(dllexport)
  #elif ECS_COLLISIONS_IMPL
    #define ECS_COLLISIONS_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define ECS_COLLISIONS_EXPORT __declspec(dllimport)
  #else
    #define ECS_COLLISIONS_EXPORT
  #endif
#else
  #define ECS_COLLISIONS_EXPORT
#endif

#endif

