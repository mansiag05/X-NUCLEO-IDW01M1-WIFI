/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SECURITY_H__
#define __SECURITY_H__
 
#include <inttypes.h>
 
#define MBED_DOMAIN "2ccfdd5f-be59-4008-93cb-5b35f00dc9f7"
#define MBED_ENDPOINT_NAME "325a3a31-eea9-44b5-abe1-3f6ca0cbb021"
 
const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"
"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"
"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"
"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"
"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"
"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"
"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"
"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"
"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"
"-----END CERTIFICATE-----\r\n";
 
const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBzzCCAXOgAwIBAgIEOZm9uDAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"
"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTYwHh\r\n"
"cNMTYxMTAyMTAxOTI2WhcNMTYxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJMmNjZ\r\n"
"mRkNWYtYmU1OS00MDA4LTkzY2ItNWIzNWYwMGRjOWY3LzMyNWEzYTMxLWVlYTkt\r\n"
"NDRiNS1hYmUxLTNmNmNhMGNiYjAyMTEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"
"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"
"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAE/ZX0ykuBa+0m/isBCZpes\r\n"
"g+5ZC1sMV4RcpZzxTpOZsCPDxSml86JSa+M0y75fSUtDj09tzKYJ0eLAsGaSL7s\r\n"
"lDAMBggqhkjOPQQDAgUAA0gAMEUCIHbrG8KCK3BASaHyIl5J3UlmI2HEGR+m8G9\r\n"
"OZg33GQFkAiEA0h0MYXWdZCUKGupimS9/lIfxIbHq/lPP+iQUZfmFMiE=\r\n"
"-----END CERTIFICATE-----\r\n";
 
const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"
"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgvmKMhwQ9lilcEUxy\r\n"
"q/Og3pF2aKhkEfAxrbHMZWidPlShRANCAAT9lfTKS4Fr7Sb+KwEJml6yD7lkLWwx\r\n"
"XhFylnPFOk5mwI8PFKaXzolJr4zTLvl9JS0OPT23MpgnR4sCwZpIvuyU\r\n"
"-----END PRIVATE KEY-----\r\n";
 
#endif //__SECURITY_H__