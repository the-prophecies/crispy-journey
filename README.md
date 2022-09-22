# How long would it take to launch a land-based missile that is on hair-trigger alert from Russia to USA?
## Affiliation

Final Project for the Modeling and Simulation 2023-1 class, taught by Dr. Victor de la Luz at the _National Autonomous University of Mexico_ (UNAM), in its  National School of Superior-Level Studies, _Morelia_ Campus (ENES Morelia), as part of its _Bs. in Information Technologies applied to Science_ career plan.

> Developed by:
>
> Arely Hilda Luis Tiburcio  | arelyhildalt@gmail.com | ([@areelu](https://github.com/areelu))
> 
> Miriam Guadalupe Valdez | mirluvams@gmail.com | ([@mirluvams](https://github.com/mirluvams))
> 
> Luis Aarón Nieto Cruz | aaronnicruz@gmail.com | ([@LuisAaronNietoCruz](https://github.com/LuisAaronNietoCruz))


## Introduction
The following project intends to provide a functional endpoint in which a potential user can visualize a map containing worldwide flight routes in real time. 

The need for such a project stems as a desire to function as a real-time alert system with which to calculate the range in which a solar flare can cause interference with the equipment on board of airships currently flying at high altitudes, given their vulnerability to EMP events.

As a final project, this aims to be a practical demostration of how a series of computers in parallel can be used to obtain an easily scalable product that could potentially be commercialized and expanded upon once completed, without relying on a single, high performance computer to perform the entire process.

“Hair-trigger alert”: is a US military policy that enables the rapid launch of nuclear weapons. Missiles on hair-trigger alert are maintained in a ready-for-launch status, staffed by around-the-clock launch crews, and can be airborne in as few as ten minutes.

## Objectives
The expected output of this project is a set of four servers, each of which provide an essential part of the project. Their denomination is as follows:

> Data Retrieval Server

In charge of obtaining real-time data from the OpenSky Network API, through the use of Python. Will relay said information in a timely manner to the Storage Server, while also keeping copies of recent data points as required for archive purposes.

> Storage Server

In charge of storing up-to-date data with PostgreSQL, to be sorted and retrieved as needed by the Processing Server.

> Processing Server

In charge of generating map images on demand, based on the request by the Web Server API

> Web Server

In charge of displaying map images to the end user through a modern web interface


## Toolset
The project is to be developed by making use of modern Python 3 libraries, including but not limited to:
* [The OpenSky Network API](https://opensky-network.org/) for data collection of near-real time flight information. 
* [Folium](https://github.com/python-visualization/folium), a wrapper to the [Leaflet.js](https://leafletjs.com/) JavaScript mapping library. | v. 0.12.1
* [NumPy](https://numpy.org/) | v. 1.22.3
* [Pandas](https://pandas.pydata.org/) | v. 1.4.2

Additionally, it plans to make use of the following web technologies, on top of the usual development stack:
* [Apache HTTPD](https://httpd.apache.org/)
* [MariaDB](https://mariadb.org/)
* [PHP](https://www.php.net/)
* [Bootstrap](https://getbootstrap.com/)

## Methodology
...



## Usage Instructions & Requirements
...



## Results
...



## Conclusions
...

## References (all URLs accessed January 2015).

> Kristensen, H.M., and M. McKinzie. 2012. Reducing alert rates of
> nuclear weapons. UNIDIR/2012/6. Geneva,
> Switzerland: United Nations Institute for Disarmament
> Research. Online at
> http://www.unidir.org/files/publications/pdfs/reducingalert-rates-of-nuclear-weapons-400.pdf.
>
> Kristensen, H.M., and Robert S. Norris. 2014. US nuclear forces,
> 2014. Bulletin of the atomic scientists 70(1):85–93.
> Online at: http://bos.sagepub.com/content/70/1/85.full.
>
> Schlosser, E. 2013. Command and control: nuclear weapons, the
> Damascus accident, and the illusion of safety. New York:
> The Penguin Press.
>
> Union of Concerned Scientists (UCS). 2015. U.S. military and
> political leaders urge taking nuclear weapons off hairtrigger alert. January. Fact sheet. Online at
> www.ucsusa.org/hairtriggerquotes.

